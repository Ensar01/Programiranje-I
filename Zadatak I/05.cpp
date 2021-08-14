#include<iostream>
using namespace std;

int prebroj(int);
int prvi(int);
int srednji(int);
int zadnji(int);
int obrni(int);

int main()
{
	int n;

	cout << "Unesi neki prirodan broj:" << endl;
	cin >> n;

	cout << "Uneseni broj ima " << prebroj(n) << " cifara, dok mu je prva cifra: " << prvi(n) << ", srednja: " << srednji(n) << ", zadnja: " <<
		zadnji(n) << " i obrnut je: " << obrni(n) << endl;

	cin.get();
	return 0;
}

int prebroj(int x)
{
	int brojac = 0;

	while (x > 0)
	{
		x /= 10;
		brojac++;
	}

	return brojac;
}

int prvi(int x)
{

	while (x >= 10)
	{
		int temp = x % 10;
		x /= 10;
	}

	return x;
}

int srednji(int x)
{
	int polovi = prebroj(x) / 2;

	x /= pow(10, polovi);

	return x % 10;
}

int zadnji(int x)
{
	return x % 10;
}

int obrni(int x)
{
	int novi = 0;
	int temp;

	while (x > 0)
	{
		temp = x % 10;
		novi = novi * 10 + temp;
		x /= 10;
	}

	return novi;
}