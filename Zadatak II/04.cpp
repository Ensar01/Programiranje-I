#include<iostream>
using namespace std;

int unos();
int novi(int);

int main()
{
	int n = unos();

	cout << "Kada broju " << n << " zamijenimo sve parne cifre sa 5 on iznosi: " << novi(n) << " i razlika izmedju unesenog i zamijenjenog broja iznosi: " << n - novi(n) << endl;


	cin.get();
	return 0;
}

int unos()
{
	int x;

	do
	{
		cout << "Unesi neki pozitivan broj:" << endl;
		cin >> x;

	} while (x < 1);

	return x;

}

int novi(int x)
{
	int temp;
	int noviBr = 0;
	int brojac = 0;

	while (x > 0)
	{
		temp = x % 10;

		if (temp % 2 == 0)
		{
			noviBr += 5 * pow(10, brojac);

		}
		else
		{
			noviBr += temp * pow(10, brojac);
		}

		brojac++;
		x /= 10;
	}

	return noviBr;
}