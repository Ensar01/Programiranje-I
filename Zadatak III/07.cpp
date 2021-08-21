#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void puniRand(int*, int, int);
void ispis(int*, int, int);


int main()
{
	srand(time(NULL));

	int v;
	cout << "Unesi zeljenu velicinu niza:" << endl;
	cin >> v;

	int* pok = new int [v] {0};

	puniRand(pok, v, 0);
	ispis(pok, v, 0);


	delete[]pok;
	pok = nullptr;


	cin.get();
	return 0;
}

void puniRand(int* niz, int vel, int i)
{
	if (i < 0 || i >= vel)
	{
		return;
	}

	*(niz + i) = rand() % 100 + 1;

	if (i > 1)
	{
		if (*(niz + i) == *(niz + i - 1) == *(niz + i - 2))
		{
			return;
		}
	}

	puniRand(niz, vel, i + 1);
}

void ispis(int* niz, int vel, int i)
{
	if (i < 0 || i >= vel)
	{
		return;
	}

	cout << *(niz + i) << " ";


	ispis(niz, vel, i + 1);
}