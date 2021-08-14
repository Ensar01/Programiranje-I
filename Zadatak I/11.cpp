#include<iostream>
using namespace std;

int unosm();
float unosx();
void funkcija(float, int, char);

int main()
{
	int m = unosm();
	float x = unosx();

	char slovo;

	do
	{
		cout << "Odaberi zeljeni karakter za zeljenu operaciju: : 's' (sabiranje), 'o' (oduzimanje), 'm' (množenje), 'd' (dijeljenje)." << endl;
		cin >> slovo;

		if (slovo != 's' && slovo != 'o' && slovo != 'm' && slovo != 'd')
		{
			cout << "Izbor nije validan!" << endl;
		}

	} while (slovo != 's' && slovo != 'o' && slovo != 'm' && slovo != 'd');

	cout << "Rezultat operacije " << slovo << " iznosi: ";

	funkcija(x, m, slovo);


	cin.get();
	return 0;
}

int unosm()
{
	int x;

	do
	{
		cout << "Unesi cijeli broj: " << endl;
		cin >> x;

	} while (x <= 0);

	return x;
}

float unosx()
{
	float x;
	cout << "Unesi realan broj:" << endl;
	cin >> x;

	return x;
}

void funkcija(float x, int m, char znak)
{
	switch (znak)
	{
	case 's':
	{
		float s = 0;

		for (int i = 1; i <= m; i++)
		{
			s += (x - i) * i;
		}

		cout << s << endl;

	}break;

	case 'o':
	{
		float o = 0;

		for (int i = 1; i <= m; i++)
		{
			o -= (x - i) * i;
		}

		cout << o << endl;

	}break;

	case 'm':
	{
		float m = 1;

		for (int i = 1; i <= m; i++)
		{
			m *= (x - i) * i;
		}

		cout << m << endl;

	}break;

	case 'd':
	{
		float d = 1;

		for (int i = 1; i <= m; i++)
		{
			d /= (x - i) * i;
		}

		cout << d << endl;

	}break;

	default:
	{
		cout << "Unos nije validan!" << endl;
	}
	}
}
