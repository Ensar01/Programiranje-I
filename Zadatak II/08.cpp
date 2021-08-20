#include<iostream>
using namespace std;

int unosA();
int unosB();
bool provjeraCifre(int, int);
int noviBr(int, int);

int main()
{
	int A = unosA();
	int B = unosB();
	int C = noviBr(A, B);

	cout << "Novi broj C sastavljen u obrnutom redoslijedu broja A i izbacenih cifara koje sadrzi broj B iznosi: " << C << " i razlika izmedju A i C iznosi: " << A << "-" << C << "=" << A - C << endl;


	cin.get();
	return 0;
}

int unosA()
{
	int x;

	do
	{
		cout << "Unesi neki broj veci od 100000:" << endl;
		cin >> x;

	} while (x < 100000);

	return x;
}

int unosB()
{
	int x;

	do
	{
		cout << "Unesi neki broj veci od 50000:" << endl;
		cin >> x;

	} while (x < 50000);

	return x;
}

bool provjeraCifre(int temp, int x)
{
	while (x > 0)
	{
		if (temp == x % 10)
		{
			return false;
		}

		x /= 10;

	}

	return true;
}

int noviBr(int x, int y)
{
	int novi = 0;
	int temp;

	while (x > 0)
	{
		temp = x % 10;

		if (provjeraCifre(temp, y))
		{
			novi = novi * 10 + temp;
		}

		x /= 10;
	}

	return novi;
}