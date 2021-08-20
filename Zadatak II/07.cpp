#include<iostream>
using namespace std;

bool isProst(int);
bool isPalindrom(int);

int main()
{

	int x;
	do
	{
		cout << "Unesi neki broj veci od 100:" << endl;
		cin >> x;

	} while (x < 100);

	if (isProst(x) && isPalindrom(x))
	{
		cout << "Broj " << x << " je u isto vrijeme prost i palindrom" << endl;
	}
	else

		cin.get();
	return 0;
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

bool isPalindrom(int x)
{
	int temp;
	int y = x;
	int novi = 0;

	while (x > 0)
	{
		temp = x % 10;

		novi = novi * 10 + temp;

		x /= 10;
	}

	if (y != novi)
	{
		return false;
	}

	return true;
}