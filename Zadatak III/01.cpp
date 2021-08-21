#include<iostream>
using namespace std;

int potencija(int);

int main()
{
	int n;
	do
	{
		cout << "Unesi neki prirodan broj n:" << endl;
		cin >> n;

	} while (n < 1);

	cout << potencija(n);
}

int potencija(int x)
{
	int k = 2;
	int l = 2;

	while (x)
	{
		int m = k * l;
		k++;
		l++;

		if (m >= x)
		{
			return m;
		}
	}

	return potencija(k) * potencija(l);
}
