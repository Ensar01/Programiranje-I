#include<iostream>
using namespace std;

struct uposlenik
{
	char* ID;
	char* imePrezime;
	float* plata;

	uposlenik() //KONSTRUKTOR - koristimo ga za kreiranje memorijskih lokacija svih dinamicki alociranih varijabli
	{
		ID = new char[10];
		imePrezime = new char[20];
		plata = new float;
	}

	~uposlenik() //DESTRUKTOR - koristimo ga za brisanje i vracanje citave dinamicki alocirane memorije
	{
		delete[]ID;
		ID = nullptr;

		delete[]imePrezime;
		imePrezime = nullptr;

		delete plata;
		plata = nullptr;
	}

};

void unos(uposlenik**, int, int);
void ispis(uposlenik**, int, int);
void dealokacija(uposlenik**&, int);
void odjelSaNajvecomPlatom(uposlenik**, int, int);

int main()
{
	int red, kolona;
	cout << "Unesi zeljeni broj redova:" << endl;
	cin >> red;
	cout << "Unesi zeljeni broj kolona:" << endl;
	cin >> kolona;

	uposlenik** niz = new uposlenik * [red];

	for (int i = 0; i < red; i++)
	{
		*(niz + i) = new uposlenik[kolona];

	}

	unos(niz, red, kolona);
	ispis(niz, red, kolona);
	odjelSaNajvecomPlatom(niz, red, kolona);


	dealokacija(niz, red);

	cin.get();
	return 0;
}

void unos(uposlenik** niz, int red, int kolona)
{
	cout << "Unesite " << red * kolona << " elementa:" << endl << endl;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cin.ignore();
			cout << "Unesite ID uposlenika: " << endl;
			cin.getline((*(niz + i) + j)->ID, 10);
			cout << "Unesite ime i prezime uposlenika: " << endl;
			cin.getline((*(niz + i) + j)->imePrezime, 20);
			cout << "Unesite platu uposlenika: " << endl;
			cin >> *(*(niz + i) + j)->plata;
			cout << endl;
		}
		cout << endl;
	}


}

void ispis(uposlenik** niz, int red, int kolona)
{
	cout << endl;

	for (int i = 0; i < red; i++)
	{
		cout << "ODJEL " << i << ":" << endl;
		for (int j = 0; j < kolona; j++)
		{
			cout << "ID uposlenika: " << (*(niz + i) + j)->ID << "\t";
			cout << "Ime i prezime uposlenika: " << (*(niz + i) + j)->imePrezime << "\t";
			cout << "Plata uposlenika iznosi: " << *(*(niz + i) + j)->plata << endl;
		}
		cout << endl;
	}
}
void dealokacija(uposlenik**& niz, int red)
{
	for (int i = 0; i < red; i++)
	{
		delete[] * (niz + i);
		*(niz + i) = nullptr;
	}

	delete[]niz;
	niz = nullptr;
}

void odjelSaNajvecomPlatom(uposlenik** niz, int red, int kolona)
{
	float* prosjekPlata = new float[red] {};

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			*(prosjekPlata + i) += *(*(niz + i) + j)->plata;
		}

		*(prosjekPlata + i) /= kolona;
	}

	int indeksNajvece = 0;

	for (int i = 0; i < red; i++)
	{
		if (*(prosjekPlata + i) > *(prosjekPlata + indeksNajvece));
		{
			indeksNajvece = i;
		}
	}

	cout << "Odjel sa najvecim prosjekom plata se nalazi pod indeksom: " << indeksNajvece << ", te najveci prosjek iznosi: " << *(prosjekPlata + indeksNajvece) << endl;

	delete[]prosjekPlata;
	prosjekPlata = nullptr;
}
