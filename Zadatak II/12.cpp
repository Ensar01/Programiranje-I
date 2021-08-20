#include<iostream>
using namespace std;

int unosm();
int unosn();
int prebroj(int);
float srednja(int);

int main()
{
	int proslaSrednja = 0;
	int trenutnaSrednja;
	int m;
	int n;

	do
	{

		m = unosm();
		n = unosn();

		if (n == 0)
		{
			break;
		}

		trenutnaSrednja = srednja(m * n);

		if (trenutnaSrednja < proslaSrednja)
		{
	             cout << "Srednja cifra proizvoda brojeva " << m << "i" << n << " (" << m << "*" << n << "=" << m * n << ")" << " je: ne ispisuje se" << endl << endl;
		}
		else
		{
		     cout << "Srednja cifra proizvoda brojeva " << m << " i " << n << " (" << m << "*" << n << "=" << m * n << ")" << " je: " << trenutnaSrednja << endl << endl;
		}




		proslaSrednja = trenutnaSrednja;




	} while (trenutnaSrednja < 9);

	cin.get();
	return 0;
}

int unosm()
{
	int x;

	do
	{
		cout << "Unesi cijeli broj izmedju 1 i 50" << endl;
		cin >> x;

	} while (x <= 1 || x >= 50);

	return x;
}

int unosn()
{
	int x;

	do
	{
		cout << "Unesi cijeli broj izmedju 1 i 500" << endl;
		cin >> x;

	} while (x <= 1 || x >= 500);

	return x;
}

int prebroj(int x)
{
	int brojac = 0;

	while (x > 0)
	{
		brojac++;
		x /= 10;
	}

	return brojac;
}

float srednja(int x)
{
	int pola = prebroj(x) / 2;

	if (prebroj(x) % 2 == 0)
	{
		float temp;
		x = x / pow(10, (pola - 1));
		temp = x % 10;
		x /= 10;
		temp += x % 10;

		return temp / 2.0;
	}
	else
	{
		x = x / pow(10, pola);

		return x % 10;
	}
}
