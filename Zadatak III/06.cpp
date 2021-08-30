#include<iostream>
using namespace std;

void puniFact(int*, int, int);
void ispis(int*, int);

int main()
{
	int v;
	cout << "Unesi zeljenu velicinu niza:" << endl;
	cin >> v;

	int* pok = new int[v] {0};

	puniFact(pok, v, 0);
	ispis(pok, v);

	delete[]pok;
	pok = nullptr;

	cin.get();
	return 0;
}

void puniFact(int* niz, int vel, int i)
{
	if (i < 0 || i >= vel)
	{
		return;
	}
	if (i == 0)
	{
		*(niz + i) = 1;
	}
	else
	{
		int pom = *(niz + i - 1) * (i + 1);

		if (pom < 0)
		{
			return;
		}

		*(niz + i) = pom;
	}

	puniFact(niz, vel, i + 1);
}

void ispis(int* niz, int vel)
{
	for (int i = 0; i < vel; i++)
	{
		cout << *(niz + i) << " ";
	}

	cout << endl;
}