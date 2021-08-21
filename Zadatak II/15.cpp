#include<iostream>
using namespace std;

const int x = 100;
int Fibbonaci(int);
void puniNizFibb(long long int[]);
void ispisNiza(long long int[]);
bool isProst(long long int);
long long int isFact(long long int&);
long long int sumFact(long long int[]);


int main()
{
	long long int niz[x];

	puniNizFibb(niz);
	ispisNiza(niz);

	cout << "Suma svih faktorijela prostih brojeva fibb niza iznosi: " << sumFact(niz) << endl;


	cin.get();
	return 0;
}

int Fibbonaci(int n)
{
	int prvi = 1;
	int drugi = 1;
	int treci = 0;

	if (n == 0)
	{
		return 1;
	}
	if (n == 1)
	{
		return 1;
	}

	for (int i = 2; i <= n; i++)
	{
		treci = prvi + drugi;
		prvi = drugi;
		drugi = treci;
	}

	return treci;
}

void puniNizFibb(long long int niz[])
{
	for (int i = 0; i < x; i++)
	{
		niz[i] = Fibbonaci(i);
	}

	cout << endl;
}

void ispisNiza(long long int niz[])
{
	cout << "Elementi niza su: " << endl;

	for (int i = 0; i < x; i++)
	{
		cout << niz[i] << " ";
	}

	cout << endl;
}

bool isProst(long long int n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

long long int isFact(long long int& n)
{
	long long int f = 1;

	for (int i = 1; i <= n; i++)
	{
		f *= i;
	}

	return f;
}

long long int sumFact(long long int niz[])
{
	long long int sum = 0;

	for (int i = 0; i < x; i++)
	{
		if (isProst(niz[i]))
		{
			sum += isFact(niz[i]);
		}

	}

	return sum;
}