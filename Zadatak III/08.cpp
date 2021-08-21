#include<iostream>
using namespace std;

const int v = 20;

void puniFibb(int*, int, int);
void ispis(int*, int);
int prebroj(int);
float srednja(int);
void sort(int*);

int main()
{

	int* pok = new int [v] {0};

	puniFibb(pok, v, 0);
	ispis(pok, v);
	sort(pok);


	delete[]pok;
	pok = nullptr;
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
		int pom = *(niz + i - 1) + *(niz + i - 2);
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
	cout << "Elementi niza su: " << endl;

	for (int i = 0; i < vel; i++)
	{
		cout << *(niz + i) << " ";
	}

	cout << endl;
}

int prebroj(int x)
{
	int brojac = 0;

	while (x > 0)
	{
		brojac++;
		x /= 10;
	}

	return brojac;
}

float srednja(int x)
{
	int pola = prebroj(x) / 2;

	if (prebroj(x) % 2 == 0)
	{
		x = x / pow(10, pola - 1);
		int temp = x % 10;
		x /= 10;
		temp += x % 10;

		return temp / 2;
	}
	else
	{
		x = x / pow(10, pola);
		return x % 10;
	}
}

void sort(int* niz)
{
	bool istinitost = true;

	while (istinitost)
	{
		istinitost = false;

		for (int i = 0; i < v - 1; i++)
		{
			if (srednja(*(niz + i)) > srednja(*(niz + i + 1)))
			{
				int temp = *(niz + i + 1);
				*(niz + i + 1) = *(niz + i);
				*(niz + i) = temp;
				istinitost = true;
			}
		}
	}
	ispis(niz, v);
}