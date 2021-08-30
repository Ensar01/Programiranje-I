#include<iostream>
using namespace std;

struct vozilo
{
	char* markaVozila;
	char* brojSasije;
	char* tipVozila; //dozvoliti unos samo vrijednosti "A", "B", ili "C"
	int* kubnihCM;

	vozilo()
	{
		markaVozila = new char[15];
		brojSasije = new char[10];
		tipVozila = new char;
		kubnihCM = new int;
	}

	~vozilo()
	{
		delete[]markaVozila;
		markaVozila = nullptr;

		delete[]brojSasije;
		brojSasije = nullptr;

		delete tipVozila;
		tipVozila = nullptr;

		delete kubnihCM;
		tipVozila = nullptr;
	}
};

void unos(vozilo**, int, int);
void ispis(vozilo**, int, int);
void dealokacija(vozilo**&, int);
void najvecaKubikaza(vozilo**, int, int);
void prosjecnaKubikaza(vozilo**, int, int);


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
	najvecaKubikaza(niz, red, kolona);
	prosjecnaKubikaza(niz, red, kolona);


	dealokacija(niz, red);

	cin.get();
	return 0;
}

void unos(vozilo** niz, int red, int kolona)
{
	cout << "Unesite " << red * kolona << " elemenata:" << endl << endl;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cin.ignore();
			cout << "Unesite marku vozila:" << endl;
			cin.getline((*(niz + i) + j)->markaVozila, 15);
			cout << "Unesite broj sasije:" << endl;
			cin.getline((*(niz + i) + j)->brojSasije, 10);

			do
			{
				cout << "Unesite tip vozila 'A', 'B', ili 'C'" << endl;
				cin >> *(*(niz + i) + j)->tipVozila;

				if (*(*(niz + i) + j)->tipVozila != 'A' && *(*(niz + i) + j)->tipVozila != 'B' && *(*(niz + i) + j)->tipVozila != 'C')
				{
					cout << "UNESEN POGRESAN TIP VOZILA!" << endl;
				}

			} while (*(*(niz + i) + j)->tipVozila != 'A' && *(*(niz + i) + j)->tipVozila != 'B' && *(*(niz + i) + j)->tipVozila != 'C');

			cout << "Unesi kubikazu vozila:" << endl;
			cin >> *(*(niz + i) + j)->kubnihCM;

		}
	}
}

void ispis(vozilo** niz, int red, int kolona)
{
	cout << endl;
	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cout << "Marka vozila: " << (*(niz + i) + j)->markaVozila << "\t";
			cout << "Broj sasije: " << (*(niz + i) + j)->brojSasije << " \t";
			cout << "Tip vozila: " << *(*(niz + i) + j)->tipVozila << "\t";
			cout << "Kubikaza vozila: " << *(*(niz + i) + j)->kubnihCM << endl;
		}

		cout << endl;
	}
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

void najvecaKubikaza(vozilo** niz, int red, int kolona)
{
	float* skupProsjek = new float[red] {};

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			*(skupProsjek + i) += *(*(niz + i) + j)->kubnihCM;
		}

		*(skupProsjek) /= kolona;
	}

	int najveciProsjek = 0;

	for (int i = 0; i < red; i++)
	{
		if (*(skupProsjek + i) > *(skupProsjek + najveciProsjek))
		{
			najveciProsjek = i;
		}
	}

	cout << "Firma sa najvecom prosjecnom kubikazom se nalazi pod indeksom: " << najveciProsjek << endl;

	delete[]skupProsjek;
	skupProsjek = nullptr;

}

void prosjecnaKubikaza(vozilo** niz, int red, int kolona)
{
	float prosjekA = 0.0f, prosjekB = 0.0f;
	int brojacA = 0, brojacB = 0;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			if (*(*(niz + i) + j)->tipVozila == 'A')
			{
				prosjekA += *(*(niz + i) + j)->kubnihCM;
				brojacA++;
			}
			else if (*(*(niz + i) + j)->tipVozila == 'B')
			{
				prosjekB += *(*(niz + i) + j)->kubnihCM;
				brojacB++;
			}
		}

	}

	if (brojacA != 0)
	{
		prosjekA /= float(brojacA);
	}
	if (brojacB != 0)
	{
		prosjekB /= float(brojacB);
	}

	cout << "Prosjecna kubikaza vozila tipa 'A' iznosi: " << prosjekA << " ,dok je prosjecna kubikaza vozila B: " << prosjekB << endl;
}
