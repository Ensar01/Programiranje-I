#include<iostream>
using namespace std;

struct vozilo
{
	char* markaVozila;
	char* nazivVozila;
	char* tipVozila; // omoguæiti unos samo 'A', 'B','C'
	float* potrosnja_goriva_po_km;

	vozilo() //KONSTRUKTOR - koristimo ga za kreiranje memorijskih lokacija svih dinamicki alociranih varijabli
	{
		markaVozila = new char[20];
		nazivVozila = new char[15];
		tipVozila = new char;
		potrosnja_goriva_po_km = new float;
	}
	~vozilo() //DESTRUKTOR - koristimo ga za brisanje i vracanje citave dinamicki alocirane memorije
	{
		delete[]markaVozila;
		markaVozila = nullptr;

		delete[]nazivVozila;
		nazivVozila = nullptr;

		delete tipVozila;
		tipVozila = nullptr;

		delete potrosnja_goriva_po_km;
		potrosnja_goriva_po_km = nullptr;
	}
};

void unos(vozilo**, int, int);
void ispis(vozilo**, int, int);
void dealokacija(vozilo**&, int);
void najvecaPotrosnjaFirma(vozilo**, int, int);
void prosjecnaPotrosnjaC(vozilo**, int, int);

int main()
{
	int red, kolona;

	cout << "Unesite zeljeni broj redova:" << endl;
	cin >> red;
	cout << "Unesite zeljeni broj kolona:" << endl;
	cin >> kolona;

	vozilo** niz = new vozilo * [red];

	for (int i = 0; i < red; i++)
	{
		*(niz + i) = new vozilo[kolona];


	}
	unos(niz, red, kolona);
	ispis(niz, red, kolona);
	najvecaPotrosnjaFirma(niz, red, kolona);
	prosjecnaPotrosnjaC(niz, red, kolona);


	dealokacija(niz, red);

	cin.get();
	return 0;
}

void unos(vozilo** niz, int red, int kolona)
{
	cout << "Unesite " << red * kolona << " elementa:" << endl << endl;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cin.ignore();
			cout << "Unesi marku vozila:" << endl;
			cin.getline((*(niz + i) + j)->markaVozila, 20);
			cout << "Unesi naziv vozila:" << endl;
			cin.getline((*(niz + i) + j)->nazivVozila, 15);
			do
			{
				cout << "Unesite tip vozila 'A', 'B','C':" << endl;
				cin >> *(*(niz + i) + j)->tipVozila;

				if (*(*(niz + i) + j)->tipVozila != 'A' && *(*(niz + i) + j)->tipVozila != 'B' && *(*(niz + i) + j)->tipVozila != 'C')
				{
					cout << "UNESEN POGRESAN TIP VOZILA!" << endl;
				}

			} while (*(*(niz + i) + j)->tipVozila != 'A' && *(*(niz + i) + j)->tipVozila != 'B' && *(*(niz + i) + j)->tipVozila != 'C');

			cout << "Unesite potrosnju goriva po km" << endl;
			cin >> *(*(niz + i) + j)->potrosnja_goriva_po_km;
		}
		cout << endl;
	}
}

void ispis(vozilo** niz, int red, int kolona)
{
	cout << endl;

	for (int i = 0; i < red; i++)
	{
		cout << "Firma " << i << " :" << endl;

		for (int j = 0; j < kolona; j++)
		{
			cout << "Marka vozila: " << (*(niz + i) + j)->markaVozila << "\t";
			cout << "Naziv vozila:" << (*(niz + i) + j)->nazivVozila << "\t";
			cout << "Tip vozila:" << *(*(niz + i) + j)->tipVozila << "\t";
			cout << "Potrosnja goriva po km:" << *(*(niz + i) + j)->potrosnja_goriva_po_km << endl;
		}

		cout << endl;
	}
	cout << endl;
}

void dealokacija(vozilo**& niz, int red)
{
	for (int i = 0; i < red; i++)
	{
		delete[] * (niz + i);
		*(niz + i) = nullptr;
	}

	delete[]niz;
	niz = nullptr;
}

void najvecaPotrosnjaFirma(vozilo** niz, int red, int kolona)
{
	float* najveci = new float[red] {};

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			*(najveci + i) += *(*(niz + i) + j)->potrosnja_goriva_po_km;
		}
	}

	int indeksFirme = 0;

	for (int i = 0; i < red; i++)
	{
		if (*(najveci + i) > *(najveci + indeksFirme))
		{
			indeksFirme = i;
		}
	}

	cout << "Firma sa najvecom potrosnjom se nalazi na indeksu: " << indeksFirme << endl;

	delete[]najveci;
	najveci = nullptr;
}

void prosjecnaPotrosnjaC(vozilo** niz, int red, int kolona)
{
	float prosjekC = 0.0f;
	int brojac = 0;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			if (*(*(niz + i) + j)->tipVozila == 'C')
			{
				prosjekC += *(*(niz + i) + j)->potrosnja_goriva_po_km;
				brojac++;
			}
		}
	}

	if (brojac != 0)
	{
		cout << "Potorsnja svih vozila tipa 'c' iznosi: " << prosjekC / float(brojac) << endl;
	}
	else
	{
		cout << "Potorsnja svih vozila tipa 'c' iznosi: " << prosjekC / float(brojac) << endl;
	}
}