#include<iostream>
using namespace std;

int unos();
int noviBr(int&);

int main()
{
	int N = unos();

	cout << "Kada obrnemo uneseni broj i izbacimo sve neparne cifre dobijemo sljedeci broj: " << noviBr(N) << endl;
	cin.get();
	return 0;
}

int unos()
{
	int x;

	do
	{
		cout << "Unesi prirodan broj izmedju 50 i 5000000:" << endl;
		cin >> x;

	} while (x < 50 || x> 5000000);

	return x;
}

int noviBr(int& x)
{
	int temp = 0;
	int novi = 0;

	while (x > 0)
	{
		temp = x % 10;

		if (temp % 2 == 0)
		{
			novi = novi * 10 + temp;
		}

		x /= 10;
	}

	return novi;
}