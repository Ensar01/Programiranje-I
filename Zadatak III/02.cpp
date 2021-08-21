#include<iostream>
using namespace std;

void puni(int*, int, int, int);
void pronadji(int*, int, int, int);
void ispis(int*, int);

int main()
{
	int v;
	cout << "Unesi zeljenu velicinu niza:" << endl;
	cin >> v;


	int* pok = new int[v] {0};
	puni(pok, v, 0, 1);
	ispis(pok, v);

	int izbor;
	cout << "Unesite broj koji zelite pronaci u nizu:" << endl;
	cin >> izbor;
	pronadji(pok, v, izbor, 0);

	delete[]pok;
	pok = nullptr;

	cin.get();
	return 0;
}

void puni(int* niz, int vel, int i, int exp)
{
	if (i < 0 || i >= vel)
	{
		return;
	}
	else
	{
		int pom = pow(2, exp);

		if (pom < 0)
		{
			return;
		}

		*(niz + i) = pom;
	}

	puni(niz, vel, i + 1, exp + 1);
}

void pronadji(int* niz, int vel, int izbor, int i) {

	if (i < 0 || i >= vel)
	{
		cout << "Broj koji trazite nije clan niza!" << endl;
		return;
	}
	else
	{
		if (*(niz + i) == izbor)
		{
			cout << "Broj koji trazite jeste clan niza!" << endl;
			return;
		}

		provjeri(niz, vel, izbor, i + 1);
	}
}

void ispis(int* niz, int vel)
{
	for (int i = 0; i < vel; i++)
	{
		cout << *(niz + i) << " ";
	}
	cout << endl;
}