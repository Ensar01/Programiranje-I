#include<iostream>
using namespace std;

int unos();
bool isProst(int);
int zadnjaCifra(int, int);

int main()
{
	int x = unos();
	int y = unos();

	if (x > y)
	{
		int temp = x;
		x = y;
		y = x;
	}

	cout << "Zadnje cifra umnoska svih prostih brojeva od " << x << "-" << y << " iznosi: " << zadnjaCifra(x, y) << endl;

	cin.get();
	return 0;
}

int unos()
{
	int x;

	do
	{
		cout << "Unesi neki prirodan broj manji od 500:" << endl;
		cin >> x;

	} while (x < 1 || x >= 500);

	return x;
}

bool isProst(int x)
{
	if (x <= 1)
	{
		return false;
	}

	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}

	return true;
}

int zadnjaCifra(int x, int y)
{
	unsigned long long int umnozak = 1;

	for (int i = x; i <= y; i++)
	{
		if (isProst(i))
		{
			umnozak *= i;
		}
	}

	return umnozak % 10;
}