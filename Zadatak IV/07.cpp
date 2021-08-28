#include<iostream>
using namespace std;

struct kosarkas
{
	char* ID;
	char* imePrezime;
	int* postignutiKosevi;

	kosarkas() //KONSTRUKTOR - koristimo ga za kreiranje memorijskih lokacija svih dinamicki alociranih varijabli
	{
		ID = new char[10];
		imePrezime = new char[20];
		postignutiKosevi = new int;

	}
	~kosarkas() //DESTRUKTOR - koristimo ga za brisanje i vracanje citave dinamicki alocirane memorije
	{
		delete[]ID;
		ID = nullptr;

		delete[]imePrezime;
		imePrezime = nullptr;

		delete postignutiKosevi;
		postignutiKosevi = nullptr;
	}
};

void unos(kosarkas**, int, int);
void ispis(kosarkas**, int, int);
void dealokacija(kosarkas**&, int);
int najboljiKlub(kosarkas**, int, int);
int* najboljiIgrac(kosarkas**, int, int, int);


int main()
{
	int red, kolona;

	cout << "Unesite zeljeni broj redova:" << endl;
	cin >> red;
	cout << "Unesite zeljeni broj kolona: " << endl;
	cin >> kolona;

	kosarkas** niz = new kosarkas * [red];

	for (int i = 0; i < red; i++)
	{
		*(niz + i) = new kosarkas[kolona];
	}

	unos(niz, red, kolona);
	ispis(niz, red, kolona);
	
	cout << "Najbolji klub se nalazi u koloni pod indeksom: " << najboljiKlub(niz, red, kolona) << endl;
	int najbolji = najboljiKlub(niz, red, kolona);
	
	cout << "Ispis najboljeg kluba:" << endl;

	for (int i = 0; i < red; i++)
	{
		cout << "ID kosarkasa: " << (*(niz + i) + najbolji)->ID << "\t";
		cout << "Ime i prezime kosarkasa : " << (*(niz + i) + najbolji)->imePrezime << "\t";
		cout << "Broj koseva koje je postigao: " << *(*(niz + i) + najbolji)->postignutiKosevi << endl << endl;
	}

	int* razlika = najboljiIgrac(niz, red, kolona, najbolji);

	cout << "Razlika izmedju koseva najboljeg igraca najboljeg kluba i najgoreg igraca u ligi iznosi: " << *razlika << endl;


	dealokacija(niz, red);

	cin.get();
	return 0;
}

void unos(kosarkas** niz, int red, int kolona)
{
	cout << "Unesite " << red * kolona << " elementa:" << endl;

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cin.ignore();
			cout << "Unesite ID kosarkasa:" << endl;
			cin.getline((*(niz + i) + j)->ID, 10);
			cout << "Unesi ime i prezime kosarkasa: " << endl;
			cin.getline((*(niz + i) + j)->imePrezime, 20);
			cout << "Unesi broj koseva koje je kosarkas postigao:" << endl;
			cin >> *(*(niz + i) + j)->postignutiKosevi;

		}

		cout << endl;
	}
}

void ispis(kosarkas** niz, int red, int kolona)
{
	cout << endl;
	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			cout << "ID kosarkasa: " << (*(niz + i) + j)->ID << "\t";
			cout << "Ime i prezime kosarkasa : " << (*(niz + i) + j)->imePrezime << "\t";
			cout << "Broj koseva koje je postigao: " << *(*(niz + i) + j)->postignutiKosevi << endl;
		}

		cout << endl;
	}
}

void dealokacija(kosarkas**& niz, int red)
{
	for (int i = 0; i < red; i++)
	{
		delete[] * (niz + i);
		*(niz + i) = nullptr;
	}

	delete[] niz;
	niz = nullptr;
}

int najboljiKlub(kosarkas** niz, int red, int kolona)
{
	int* najbolji = new int[kolona] {};

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			*(najbolji + i) = *(*(niz + j) + i)->postignutiKosevi;
		}
	}

	int indeksNajboljeg = 0;

	for (int i = 0; i < kolona; i++)
	{
		if (*(najbolji + i) > *(najbolji + indeksNajboljeg))
		{
			indeksNajboljeg = i;
		}
	}

	delete[]najbolji;
	najbolji = nullptr;

	return indeksNajboljeg;
}

int* najboljiIgrac(kosarkas** niz, int red, int kolona, int najKlub)
{
	int* najgori = new int[red] {};
	int* pomocni = new int[red] {};

	for (int i = 0; i < red; i++)
	{
		*(pomocni + i) = *(*(niz + i) + najKlub)->postignutiKosevi;
	}

	int najbolji = *(pomocni + 0);


	for (int i = 0; i < red; i++)
	{
		if (*(pomocni + i) > najbolji);
		{
			najbolji = *(pomocni + i);
		}
	}

	for (int i = 0; i < red; i++)
	{
		for (int j = 0; j < kolona; j++)
		{
			*(najgori + i) += *(*(niz + i) + j)->postignutiKosevi;
		}
	}

	int najgoriK = *(najgori + 0);

	for (int i = 0; i < red; i++)
	{
		if (*(najgori + i) < *(najgori + najgoriK))
		{
			najgoriK = *(najgori + i);
		}
	}

	int razlika = abs(najbolji - najgoriK);//abs() - u slucaju da oduzimamo od manjeg, a ne od veceg

	cout << "Najbolji kosarkas u klubu " << najKlub << " ima " << najbolji << " postignutih koseva" << endl;
	cout << "Najgori kosarkas u ligi ima " << najgoriK << " postignutih koseva" << endl << endl;

	delete[]najgori;
	najgori = nullptr;
	delete[]pomocni;
	pomocni = nullptr;

	return new int(razlika);
}
