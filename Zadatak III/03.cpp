#include<iostream>
using namespace std;

void puni(int*, int, int);
void ispis(int*, int);
long long int suma(int*, int, int);

int main()
{
	int v;
	cout << "Unesite zeljenu velicinu niza:" << endl;
	cin >> v;

	int* pok = new int [v] {0};


	puni(pok, v, 0);
	ispis(pok, v);

	cout << "Suma svih elemenata niza iznosi: " << suma(pok, v, 0) << endl;

	delete[]pok;
	pok = nullptr;

	cin.get();
}

void puni(int* niz, int vel, int i)
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
		*(niz + i) = 3;
	}
	else
	{
		int pom = *(niz + i - 2) * *(niz + i - 1);
		if (pom < 0)
		{
			return;
		}
		*(niz + i) = pom;
	}

	puni(niz, vel, i + 1);
}

void ispis(int* niz, int vel)
{
	for (int i = 0; i < vel; i++)
	{
		cout << *(niz + i) << " ";
	}
	cout << endl;
}

long long int suma(int* niz, int vel, int i)
{
	if (i < 0 || i >= vel)
	{
		return 0;
	}

	return *(niz + i) + suma(niz, vel, i + 1);
}