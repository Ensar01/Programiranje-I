#include<iostream>
using namespace std;

int prebrojCifre(int);
float srednji(int);
int proizvod(int);


int main()
{
	int N;
	cout << "Unesi cijeli broj N:" << endl;
	cin >> N;

	cout << "Najmanja vrijednost sa koju smo trebali pomnoziti srednju cifru " << srednji(N) << " da bi dobili broj veci od " << N << " je: " << proizvod(N);

	cin.get();
	return 0;
}

int prebrojCifre(int x)
{
	int brojac = 0;
	while (x > 0)
	{
		x /= 10;
		brojac++;
	}

	return brojac;
}

float srednji(int x)
{
	int pola = prebrojCifre(x) / 2;

	if (prebrojCifre(x) % 2 == 0)
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

int proizvod(int x)
{
	int srednja = srednji(x);
	int brojac = 1;
	int noviBr = 0;

	while (srednja <= x)
	{
		noviBr = srednja * brojac;

		if (noviBr > x)
		{
			break;
		}
		brojac++;
	}

	return brojac;
}