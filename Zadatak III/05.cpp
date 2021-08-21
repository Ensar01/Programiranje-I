#include<iostream>
using namespace std;

void puniKub(int*, int, int);
void ispis(int*, int);

int main()
{
	int v;
	cout << "Unesite zeljenu velicinu niza: " << endl;
	cin >> v;

	int* pok = new int[v] {0};
	puniKub(pok, v, 0);
	ispis(pok, v);


	delete[]pok;
	pok = nullptr;

	cin.get();
	return 0;
}

void puniKub(int* niz, int vel, int i)
{
	if (i < 0 || i >= vel)
	{
		return;
	}
	if (i == 0)
	{
		*(niz + i) = 2;
	}
	if (i > 0)
	{
		int pom = pow(*(niz + i - 1), 3);

		if (pom < 0)
		{
			return;
		}

		*(niz + i) = pom;
	}

	puniKub(niz, vel, i + 1);
}

void ispis(int* niz, int vel)
{
	for (int i = 0; i < vel; i++)
	{
		cout << *(niz + i) << " ";
	}

	cout << endl;
}