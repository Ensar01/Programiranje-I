#include<iostream>
using namespace std;

int isFact(int);
float calc(int);

int main()
{
	int n;
	cout << "Unesi cijeli broj n:" << endl;
	cin >> n;

	cout << "Rezultat date funkcije iznosi: " << calc(n) << endl;

	cin.get();
	return 0;
}

int isFact(int x)
{
	unsigned long int f = 1;

	for (int i = 1; i <= x; i++)
	{
		f *= i;
	}

	return f;
}

float calc(int n)
{
	float c = 0.0f;

	for (int i = 1; i <= n; i++)
	{
		c += pow(-1, (i - 1)) * (i / 1 + (isFact(i)));
	}

	return c;
}

