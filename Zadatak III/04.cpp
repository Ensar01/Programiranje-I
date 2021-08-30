#include<iostream>
using namespace std;

void puniFibb(int*, int, int);
void ispis(int*, int);
void pronadji(int*, int, int, int);

int main()
{
	int v;
	cout << "Unesi zeljenu velicinu niza:" << endl;
	cin >> v;

	int* pok = new int[v] {0};

	puniFibb(pok, v, 0);
	ispis(pok, v);

	int izbor;
	cout << "Unesi broj koji zelite pronaci u nizu:" << endl;
	cin >> izbor;
	pronadji(pok, v, izbor, 0);


	delete[]pok;
	pok = nullptr;


	cin.get();
	return 0;
}

void puniFibb(int* niz, int vel, int i)
{
	if (i < 0 || i >= vel)
	{
		return;
	}
	if (i == 0)
	{
		*(niz + i) = 1;
	}
	else if (i == 1)
	{
		*(niz + i) = 1;
	}
	else
	{
		int pom = *(niz + i - 2) + *(niz + i - 1);

		if (pom < 0)
		{
			return;
		}

		*(niz + i) = pom;
	}

	puniFibb(niz, vel, i + 1);
}

void ispis(int* niz, int vel)
{
	for (int i = 0; i < vel; i++)
	{
		cout << *(niz + i) << " ";
	}

	cout << endl;
}

void pronadji(int* niz, int vel, int izbor, int i)
{
	if (i < 0 || i >= vel)
	{
		cout << "Broj koji trazite nije clan niza!" << endl;
		return;
	}

	if (izbor == *(niz + i))
	{
		cout << "Broj koji trazite jeste clan niza!" << endl;
		return;
	}

	pronadji(niz, vel, izbor, i + 1);
}