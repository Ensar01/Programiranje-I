#include<iostream>

using namespace std;

struct fudbaler {
	int ID;
	char* ime_i_Prezime;
	char* pozicija;
	int* broj_golova;

	fudbaler() //KONSTRUKTOR - koristimo ga za kreiranje memorijskih lokacija svih dinamicki alociranih varijabli
	{
		ID = 0;
		ime_i_Prezime = new char[20];
		pozicija = new char;
		broj_golova = new int;
	}

	~fudbaler() //DESTRUKTOR - koristimo ga za brisanje i vracanje citave dinamicki alocirane memorije
	{
		delete[] ime_i_Prezime;
		ime_i_Prezime = nullptr;

		delete pozicija;
		pozicija = nullptr;

		delete broj_golova;
		broj_golova = nullptr;
	}
};

void unos(fudbaler**, int, int);
void ispis(fudbaler**, int, int);
void dealokacija(fudbaler**&, int);
void prosjekGolova_poPoziciji(fudbaler**, int, int);
void najboljiKlub_odabranePozicije(fudbaler**, int, int);



int main()
{

	int red, kolona;

	cout << "Unesi zeljeni broj redova:" << endl;
	cin >> red;
	cout << "Unesi zeljeni broj kolona:" << endl;
	cin >> kolona;

	//kreiramo 2D din. niz

	fudbaler** niz = new fudbaler * [red];

	for (int i = 0; i < red; i++)
	{
		*(niz + i) = new fudbaler[kolona];
	}


	unos(niz, red, kolona);
	ispis(niz, red, kolona);
	prosjekGolova_poPoziciji(niz, red, kolona);
	najboljiKlub_odabranePozicije(niz, red, kolona);


	dealokacija(niz, red);

	cin.get();
	return 0;
}

void unos(fudbaler** niz, int red, int kolona)
{
	cout << "Molim vas unesite " << red * kolona << " elemenata niza " << endl << endl;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cin.ignore();
			cout << "Unesite ID igraca:" << endl;
			cin >> (*(niz + i) + j)->ID;

			cin.ignore();

			cout << "Unesi ime i prezime igraca:" << endl;
			cin.getline((*(niz + i) + j)->ime_i_Prezime, 20);

			do
			{

				cout << "Unesite poziciju N-napad, O-odbrana, V-vezni: " << endl;
				cin >> *(*(niz + i) + j)->pozicija;

				if (*(*(niz + i) + j)->pozicija != 'N' && *(*(niz + i) + j)->pozicija != 'O' && *(*(niz + i) + j)->pozicija != 'V')
				{
					cout << "UNESENA POGRESNA POZICIJA!" << endl;
				}

			} while (*(*(niz + i) + j)->pozicija != 'N' && *(*(niz + i) + j)->pozicija != 'O' && *(*(niz + i) + j)->pozicija != 'V');

			cout << "Unesite broj golova koje je igrac postigao:" << endl;
			cin >> *(*(niz + i) + j)->broj_golova;

			cout << endl;
		}
	}
}

void ispis(fudbaler** niz, int red, int kolona)
{
	cout << endl;
	cout << "Unijeli ste " << red * kolona << " elementa, a oni su: " << endl << endl;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cout << "ID igraca je: " << (*(niz + i) + j)->ID << "\t";
			cout << "Ime igraca je: " << (*(niz + i) + j)->ime_i_Prezime << "\t";
			cout << "Pozicija igraca je:" << *(*(niz + i) + j)->pozicija << "\t";
			cout << " Broj golova koje je igrac postigao iznosi: " << *(*(niz + i) + j)->broj_golova << endl;

		}
		cout << endl;
	}

}

void dealokacija(fudbaler**& niz, int red)
{
	for (int i = 0; i < red; i++) //prvo brisemo 1D nizove tj. kolone
	{
		delete[] * (niz + i);
		*(niz + i) = nullptr;
	}

	delete[]niz; //i onda niz redova (pokazaivaca)
	niz = nullptr;
}

void prosjekGolova_poPoziciji(fudbaler** niz, int red, int kolona)
{
	float prosjekN = 0.0f, prosjekO = 0.0f, prosjekV = 0.0f;
	int brojacN = 0, brojacO = 0, brojacV = 0;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			if (*(*(niz + i) + j)->pozicija == 'N')
			{
				prosjekN += *(*(niz + i) + j)->broj_golova;
				brojacN++;
			}
			else if (*(*(niz + i) + j)->pozicija == 'O')
			{
				prosjekO += *(*(niz + i) + j)->broj_golova;
				brojacO++;
			}
			else if (*(*(niz + i) + j)->pozicija == 'V')
			{
				prosjekV += *(*(niz + i) + j)->broj_golova;
				brojacV++;
			}
		}

		if (brojacN != 0)
		{
			prosjekN /= float(brojacN);
		}
		if (brojacO != 0)
		{
			prosjekO /= float(brojacO);
		}
		if (brojacV != 0)
		{
			prosjekV /= float(brojacV);
		}

		cout << "Klubu " << i << " prosjek golova na napadackim pozicijama iznosi: " << prosjekN << " , na odbrambenim pozicijama iznosi: "
			<< prosjekO << " i na veznim pozicijama iznosi: " << prosjekV << endl;

		prosjekN = 0.0f, prosjekO = 0.0f, prosjekV = 0.0f; //vratimo na nulu da nam ne bi ostao prosjek starog kluba 
		brojacN = 0, brojacO = 0, brojacV = 0; //isto i za brojace
	}

}

void najboljiKlub_odabranePozicije(fudbaler** niz, int red, int kolona)
{
	char izbor;
	cout << endl;

	do
	{
		cout << "Unesite poziciju koju zelite da potrazite: N-napad, O-odbrana, V-vezni " << endl;
		cin >> izbor;
		if (izbor != 'N' && izbor != 'O' && izbor != 'V')
		{
			cout << "UNESENA POGRESNA POZICIJA!" << endl;
		}
	} while (izbor != 'N' && izbor != 'O' && izbor != 'V');

	float* prosjeciOdabranihPozicija = new float [red] {}; //pomocni niz u koje cemo smjestati sve prosjeke

	int brojac = 0;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			if (*(*(niz + i) + j)->pozicija == izbor)
			{
				*(prosjeciOdabranihPozicija + i) += *(*(niz + i) + j)->broj_golova;
			}
		}

		if (brojac != 0)
		{
			*(prosjeciOdabranihPozicija + i) /= float(brojac);
		}
	}

	int indeksNajboljeg = 0;

	for (int i = 0; i < red; i++)
	{
		if (*(prosjeciOdabranihPozicija + i) > *(prosjeciOdabranihPozicija + indeksNajboljeg))
		{
			indeksNajboljeg = i;
		}
	}

	cout << "Za poziciju " << izbor << " indeks najboljeg kluba tj. kluba sa najvecim prosjekom je " << indeksNajboljeg << endl;

	delete[]prosjeciOdabranihPozicija;
	prosjeciOdabranihPozicija = nullptr;

}