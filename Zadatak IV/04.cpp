#include<iostream>
using namespace std;

struct student
{
	char* ID;
	char* imePrezime;
	float* prosjek;

	student() //KONSTRUKTOR - koristimo ga za kreiranje memorijskih lokacija svih dinamicki alociranih varijabli
	{
		ID = new char[10];
		imePrezime = new char[20];
		prosjek = new float;
	}

	~student()
	{
		delete[]ID;
		ID = nullptr;

		delete[]imePrezime;
		imePrezime = nullptr;

		delete prosjek;
		prosjek = nullptr;
	}
};

void unos(student**, int);
void ispis(student**, int);
void dealokacija(student**&, int);
void fakultetNajveciProsjek(student**, int);
void studentNajveciProsjek(student**, int);

int main()
{
	int redkolona;
	cout << "Unesite zeljeni broj redova i kolona:" << endl;
	cin >> redkolona;

	student** niz = new student * [redkolona];

	for (int i = 0; i < redkolona; i++)
	{
		*(niz + i) = new student[redkolona];
	}

	unos(niz, redkolona);
	ispis(niz, redkolona);
	fakultetNajveciProsjek(niz, redkolona);
	studentNajveciProsjek(niz, redkolona);


	dealokacija(niz, redkolona);

	cin.get();
	return 0;
}


void unos(student** niz, int redkolona)
{
	cout << "Unesite " << redkolona * redkolona << " elementa:" << endl << endl;

	for (int i = 0; i < redkolona; i++)
	{
		for (int j = 0; j < redkolona; j++)
		{
			cin.ignore();
			cout << "Unesi ID studenta:" << endl;
			cin.getline((*(niz + i) + j)->ID, 10);
			cout << "Unesi ime i prezime studenta:" << endl;
			cin.getline((*(niz + i) + j)->imePrezime, 20);
			cout << "Unesi prosjek studenta:" << endl;
			cin >> *(*(niz + i) + j)->prosjek;
		}

		cout << endl;
	}
	cout << endl;
}
void ispis(student** niz, int redkolona)
{
	cout << endl;

	for (int i = 0; i < redkolona; i++)
	{
		cout << "Fakultet:" << i << endl;

		for (int j = 0; j < redkolona; j++)
		{
			cout << "ID studenta: " << (*(niz + i) + j)->ID << "\t";
			cout << "Ime i prezime studenta: " << (*(niz + i) + j)->imePrezime << "\t";
			cout << "Prosjek studenta: " << *(*(niz + i) + j)->prosjek << endl;
		}
		cout << endl;
	}

}

void dealokacija(student**& niz, int redkolona)
{
	for (int i = 0; i < redkolona; i++)
	{
		delete[] * (niz + i);
		*(niz + i) = nullptr;
	}

	delete[]niz;
	niz = nullptr;
}

void fakultetNajveciProsjek(student** niz, int redkolona)
{
	float* najveci = new float[redkolona] {};

	for (int i = 0; i < redkolona; i++)
	{
		for (int j = 0; j < redkolona; j++)
		{
			*(najveci + i) += *(*(niz + i) + j)->prosjek;
		}

		*(najveci + i) /= redkolona;
	}

	int indeksNajveceg = 0;

	for (int i = 0; i < redkolona; i++)
	{
		if (*(najveci + i) > *(najveci + indeksNajveceg))
		{
			indeksNajveceg = i;
		}
	}

	cout << "Indeks fakulteta sa najvecim prosjekom je: " << indeksNajveceg << endl;

	delete[]najveci;
	najveci = nullptr;
}

void studentNajveciProsjek(student** niz, int redkolona)
{
	int najboljiRed = 0, najboljaKolona = 0;

	for (int i = 0; i < redkolona; i++)
	{
		for (int j = 0; j < redkolona; j++)
		{
			if ((*(*(niz + i) + j)->prosjek) > (*(*(niz + najboljiRed) + najboljaKolona)->prosjek))
			{
				najboljiRed = i;
				najboljaKolona = j;
			}
		}

	}

	cout << "ID najboljeg studenta je: " << *(*(niz + najboljiRed) + najboljaKolona)->ID << endl;
}