#include<iostream>
using namespace std;

struct figura
{
	int ID;
	char* nazivFigure;
	float* visinaFigure;

	figura() //KONSTRUKTOR - koristimo ga za kreiranje memorijskih lokacija svih dinamicki alociranih varijabli
	{
		ID = 0;
		nazivFigure = new char[10];
		visinaFigure = new float;

	}

	~figura() //DESTRUKTOR - koristimo ga za brisanje i vracanje citave dinamicki alocirane memorije
	{
		delete[]nazivFigure;
		nazivFigure = nullptr;

		delete visinaFigure;
		visinaFigure = nullptr;
	}
};

void unos(figura**, int, int);
void ispis(figura**, int, int);
void dealokacija(figura**&, int);
float* visinaFigura(figura**, int, int);

int main()
{
	int red, kolona;

	cout << "Unesite zeljeni broj redova:" << endl;
	cin >> red;
	cout << "Unesite zeljeni broj kolona:" << endl;
	cin >> kolona;

	figura** niz = new figura * [red];

	for (int i = 0; i < red; i++)
	{
		*(niz + i) = new figura[kolona];
	}

	unos(niz, red, kolona);
	ispis(niz, red, kolona);



	float* prosjek = visinaFigura(niz, red, kolona);
	cout << "Prosjecna visina figura ispod sporedne dijagonale iznos: " << *prosjek << " , a memorijska lokacija na kojoj se nalazi: " << prosjek << endl;

	dealokacija(niz, red);

	delete[]prosjek;
	prosjek = nullptr;

	cin.get();
	return 0;
}

void unos(figura** niz, int red, int kolona)
{
	cout << "Unesite " << red * kolona << " elementa:" << endl << endl;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cout << "Unesi ID figure:" << endl;
			cin >> (*(niz + i) + j)->ID;
			cin.ignore();
			cout << "Unesi naziv figure:" << endl;
			cin.getline((*(niz + i) + j)->nazivFigure, 10);
			cout << "Unesi visinu figure:" << endl;
			cin >> *(*(niz + i) + j)->visinaFigure;
		}

		cout << endl;
	}
}

void ispis(figura** niz, int red, int kolona)
{
	cout << endl;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cout << "ID figure: " << (*(niz + i) + j)->ID << "\t";
			cout << "Naziv figure figure: " << (*(niz + i) + j)->nazivFigure << "\t";
			cout << "Visina figure figure: " << *(*(niz + i) + j)->visinaFigure << endl;
		}

		cout << endl;
	}
}

void dealokacija(figura**& niz, int red)
{
	for (int i = 0; i < red; i++)
	{
		delete[] * (niz + i);
		*(niz + i) = nullptr;
	}

	delete[]niz;
	niz = nullptr;
}

float* visinaFigura(figura** niz, int red, int kolona)
{
	int brojac = 0;
	float prosjek = 0.0f;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			if ((i + j) >= red - 1 && (i + j) % 2 == 0) //i+j>=red-1 da samo uzimamo vrijednosti ispod sporedne dijagonale
			{
				prosjek += *(*(niz + i) + j)->visinaFigure;
				brojac++;
			}
		}
	}


	if (brojac != 0)
	{
		prosjek /= float(brojac);
	}


	return new float(prosjek);
}