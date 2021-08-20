#include<iostream>
using namespace std;

int unos();
bool isProst(int);
int najveciProst(int, int);

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

	cout << "Najveci prost broj od " << x << " do " << y << " iznosi: " << najveciProst(x, y) << endl;

	cin.get();
	return 0;
}
int unos()
{
	int x;

	do
	{
		cout << "Unesi neki prirodan broj manji od 500" << endl;
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

int najveciProst(int x, int y)
{
	int najveciProst = 0;

	for (int i = x + 1; i < y; i++)
	{
		if (isProst(i))
		{
			if (najveciProst < i)
			{
				najveciProst = i;
			}

		}
	}

	return najveciProst % 10;
}