#include<iostream>
using namespace std;

int unosm();
int unosn();
int prebroj(int);
float srednja(int);
void ispis(int, int);

int main()
{
	int m = unosm();
	int n = unosn();

	if (m > n)
	{
		int temp = m;
		m = n;
		n = temp;
	}

	ispis(m, n);


	cin.get();
	return 0;
}

int unosm()
{
	int x;
	do
	{
		cout << "Unesi prirodan broj veci od 100:" << endl;
		cin >> x;
	} while (x <= 100 || x >= 500);

	return x;
}
int unosn()
{
	int x;
	do
	{
		cout << "Unesi prirodan broj veci od 100 a manji od 500:" << endl;
		cin >> x;
	} while (x <= 100 || x >= 500);

	return 0;
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
		x = x / pow(10, (pola - 1));
		int temp = x % 10;
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

void ispis(int x, int y)
{
	int najvecaSrednja = 0;
	int trenutnaSrednja = 0;
	float sum = 0;
	int brojac = 0;

	for (int i = x; i <= y; i++)
	{
		sum += srednja(i);
		trenutnaSrednja = srednja(i);

		if (trenutnaSrednja > najvecaSrednja)
		{
			najvecaSrednja = trenutnaSrednja;
		}
		brojac++;

	}

	cout << "Aritmeticka sredina svih srednjih cifara od " << x << " do " << y << " iznosi: " << sum / float(brojac) << " dok je najveca srednja cifra u navedenom rangu: " << najvecaSrednja << endl;
}