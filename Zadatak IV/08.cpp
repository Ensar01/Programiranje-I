#include<iostream>
using namespace std;

struct vremenska_prognoza
{
	char* padavine; //dozvoliti unos rijeci npr. "kisa" ili "snijeg"
	float* temperatura;
	float* vlaznost_vazduha;

	vremenska_prognoza() //KONSTRUKTOR - koristimo ga za kreiranje memorijskih lokacija svih dinamicki alociranih varijabli
	{
		padavine = new char[10];
		temperatura = new float;
		vlaznost_vazduha = new float;
	}

	~vremenska_prognoza()
	{
		delete[]padavine;
		padavine = nullptr;

		delete temperatura;
		temperatura = nullptr;

		delete vlaznost_vazduha;
		vlaznost_vazduha = nullptr;
	}

};

void unos(vremenska_prognoza**, int, int);
void ispis(vremenska_prognoza**, int, int);
void dealokacija(vremenska_prognoza**&, int);
void unosN(vremenska_prognoza*, int);
void najtacnijiMeteorolog(vremenska_prognoza**, vremenska_prognoza*, int, int);

int main()
{
	int red, kolona;

	cout << "Unesite zeljeni broj redova:" << endl;
	cin >> red;
	cout << "Unesite zeljeni broj kolona:" << endl;
	cin >> kolona;

	vremenska_prognoza** niz = new vremenska_prognoza * [red];

	for (int i = 0; i < red; i++)
	{
		*(niz + i) = new vremenska_prognoza[kolona];
	}

	unos(niz, red, kolona);
	ispis(niz, red, kolona);

	vremenska_prognoza* niz1D = new vremenska_prognoza[kolona];
	unosN(niz1D, kolona);
	cout << endl;

	najtacnijiMeteorolog(niz, niz1D, red, kolona);


	delete[]niz1D;
	niz1D = nullptr;

	dealokacija(niz, red);


	cin.get();
	return 0;
}

void unos(vremenska_prognoza** niz, int red, int kolona)
{
	cout << "Unesite " << red * kolona << " elementa:" << endl << endl;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cin.ignore();
			cout << "Unesite padavine:" << endl;
			cin.getline((*(niz + i) + j)->padavine, 10);
			cout << "Unesite temperaturu: " << endl;
			cin >> *(*(niz + i) + j)->temperatura;
			cout << "Unesite vlaznost vazduha:" << endl;
			cin >> *(*(niz + i) + j)->vlaznost_vazduha;
		}
		cout << endl;
	}

}
void ispis(vremenska_prognoza** niz, int red, int kolona)
{
	cout << endl;
	for (int i = 0; i < red; i++)
	{
		cout << "Meteorolog " << i << ":" << endl;

		for (int j = 0; j < kolona; j++)
		{
			cout << "Padavine za dan " << j << ": " << (*(niz + i) + j)->padavine << "\t";
			cout << "Temperatura za dan " << j << ": " << *(*(niz + i) + j)->temperatura << "\t";
			cout << "Vlaznost vazduha za dan " << j << ": " << *(*(niz + i) + j)->vlaznost_vazduha << endl;
		}

		cout << endl;
	}
}

void dealokacija(vremenska_prognoza**& niz, int red)
{
	for (size_t i = 0; i < red; i++)
	{
		delete[] * (niz + i);
		*(niz + i) = nullptr;
	}

	delete[]niz;
	niz = nullptr;
}

void unosN(vremenska_prognoza* niz, int kolona)
{
	cout << "Unesi " << kolona << " elementa za provjeru: " << endl;

	for (int i = 0; i < kolona; i++)
	{
		cin.ignore();
		cout << "Unesite padavine:" << endl;
		cin.getline((niz + i)->padavine, 10);
		cout << "Unesite temperaturu: " << endl;
		cin >> *(niz + i)->temperatura;
		cout << "Unesite vlaznost vazduha:" << endl;
		cin >> *(niz + i)->vlaznost_vazduha;
	}
}

void najtacnijiMeteorolog(vremenska_prognoza** niz, vremenska_prognoza* niz1D, int red, int kolona)
{
	float* pomocni = new float[kolona] {}; //niz u kome cemo smjestati odstupanja od realne temperature (razliku izmedju temperature meteorologa(niz) i tacne temperature(1Dniz)

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			*(pomocni + i) += abs(*(*(niz + i) + j)->temperatura - *(niz1D + i)->temperatura);

		}
	}

	int minOdstupanje = 0;

	for (int i = 0; i < kolona; i++)
	{
		if (*(pomocni + i) < *(pomocni + minOdstupanje))
		{
			minOdstupanje = i;
		}
	}

	cout << "Meteorolog koji je najblizi bio stvarnoj prognozi se nalazi na indeksu : " << minOdstupanje << endl;

	delete[]pomocni;
	pomocni = nullptr;
}
