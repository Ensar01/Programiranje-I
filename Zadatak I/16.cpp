#include<iostream>
#include<iomanip>
using namespace std;

int unos();
bool isSavrsen(int);
double ArtimetickaSredina(int, int);

int main()
{
	int x = unos();
	int y = unos();

	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}

	cout << "Artimeticka sredina savrsenih brojeva od " << x << "-" << y << " iznos: " << ArtimetickaSredina(x, y);

	cin.get();
	return 0;
}

int unos()
{
	int x;
	do
	{
		cout << "Unesi neki prirodan broj:" << endl;
		cin >> x;

	} while (x < 1);

	return x;
}

bool isSavrsen(int x)
{
	int suma = 0;

	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			suma += i;
		}

	}

	if (x != suma)
	{
		return false;
	}

	return true;
}

double ArtimetickaSredina(int x, int y)
{
	int as = 0;
	int brojac = 0;

	for (int i = x; i <= y; i++)
	{
		if (isSavrsen(i))
		{
			as += i;
			brojac++;
		}

	}

	return double(as) / brojac; //bacamo sumu u double radi preciznijeg ispisa
}