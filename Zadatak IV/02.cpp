#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

struct fudbaler
{
	int* godRodjenja;
	int* brojIgraca;
	int* golovi;


	fudbaler() //KONSTRUKTOR - koristimo ga za kreiranje memorijskih lokacija svih dinamicki alociranih varijabli
	{
		godRodjenja = new int;
		brojIgraca = new int;
		golovi = new int;
	}

	~fudbaler() //DESTRUKTOR - koristimo ga za brisanje i vracanje citave dinamicki alocirane memorije
	{
		delete godRodjenja;
		godRodjenja = nullptr;

		delete brojIgraca;
		brojIgraca = nullptr;

		delete golovi;
		golovi = nullptr;
	}
};

void unos(fudbaler**, int, int);
void ispis(fudbaler**, int, int);
void dealokacija(fudbaler**&, int);
void najveciProsjekTim(fudbaler**, int, int);
void najviseGolovaIgrac(fudbaler**, int, int);


int main()
{
	srand(time(NULL));

	int red, kolona;

	cout << "Unesi zeljeni broj redova:" << endl;
	cin >> red;
	cout << "Unesi zeljeni broj kolona:" << endl;
	cin >> kolona;

	fudbaler** niz = new fudbaler * [red];

	for (int i = 0; i < red; i++)
	{
		*(niz + i) = new fudbaler[kolona];
	}

	unos(niz, red, kolona);
	ispis(niz, red, kolona);
	najveciProsjekTim(niz, red, kolona);
	najviseGolovaIgrac(niz, red, kolona);


	dealokacija(niz, red);

	cin.get();
	return 0;
}

void unos(fudbaler** niz, int red, int kolona)
{
	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			*(*(niz + i) + j)->godRodjenja = 1980 + rand() % ((2000 + 1) - 1980); // Generiše brojeve u rangu 1980 - 2000
			*(*(niz + i) + j)->brojIgraca = rand() % 30 + 1;
			*(*(niz + i) + j)->golovi = rand() % 5;
		}
	}
}

void ispis(fudbaler** niz, int red, int kolona)
{
	cout << endl;
	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cout << "Godina rodjenja igraca je: " << *(*(niz + i) + j)->godRodjenja << "\t";
			cout << "Broj igraca je: " << *(*(niz + i) + j)->brojIgraca << "\t";
			cout << "Broj golova koje je igrac postigao:" << *(*(niz + i) + j)->golovi << endl;
		}
		cout << endl;
	}
}

void dealokacija(fudbaler**& niz, int red)
{
	for (int i = 0; i < red; i++)
	{
		delete[] * (niz + i); //prvo brisemo 1D nizove tj. kolone
	}

	delete[]niz; //i onda niz redova (pokazaivaca)
	niz = nullptr;
}

void najveciProsjekTim(fudbaler** niz, int red, int kolona)
{
	float* prosjekNajboljeg = new float[red] {};

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			*(prosjekNajboljeg + i) += *(*(niz + i) + j)->golovi;
		}

		*(prosjekNajboljeg + i) /= kolona;
	}

	int indeksNajboljeg = 0;

	for (int i = 0; i < red; i++)
	{
		if (*(prosjekNajboljeg + i) > *(prosjekNajboljeg + indeksNajboljeg))
		{
			indeksNajboljeg = i;
		}
	}

	cout << "Indeks najboljeg kluba tj. kluba sa najvecim prosjekom je: " << indeksNajboljeg << endl;

	delete[]prosjekNajboljeg;
	prosjekNajboljeg = nullptr;
}

void najviseGolovaIgrac(fudbaler** niz, int red, int kolona)
{
	float* najgoriProsjek = new float[red] {};

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			*(najgoriProsjek + i) += *(*(niz + i) + j)->golovi;
		}

		*(najgoriProsjek + i) /= kolona;
	}

	int indeksNajgoreg = 0;

	for (int i = 0; i < red; i++)
	{
		if (*(najgoriProsjek + i) < *(najgoriProsjek + indeksNajgoreg))
		{
			indeksNajgoreg = i;
		}
	}

	int najboljiFudbaler = *(*(niz + indeksNajgoreg) + 0)->golovi;
	int indeksFudbalera = 0;

	for (int i = 0; i < kolona; i++)
	{
		if (*(*(niz + indeksNajgoreg) + i)->golovi > najboljiFudbaler)
		{
			najboljiFudbaler = *(*(niz + indeksNajgoreg) + i)->golovi;
			indeksFudbalera = i;
		}
	}

	cout << "Najbolji fudbaler najgoreg tima je rodjen: " << *(*(niz + indeksNajgoreg) + indeksFudbalera)->godRodjenja << " i ima " <<
		*(*(niz + indeksNajgoreg) + indeksFudbalera)->golovi << " postignutih golova" << endl;

	delete[]najgoriProsjek;
	najgoriProsjek = nullptr;
}