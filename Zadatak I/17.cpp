#include <iostream>
using namespace std;

int unosm();
int unosn();
bool slozeni(int);
void ispis(int, int);
double ArtimetickaSredina(int, int);


int main()
{
	int m = unosm();
	int n = unosn();

	cout << "Svi slozeni brojevi od " << m << "-" << n << " su: ";
	ispis(m, n);
	cout << ", a njihova artimeticka sredina iznosi: " << ArtimetickaSredina(m, n) << endl;



	cin.get();
	return 0;
}

int unosm()
{
	int x;
	do
	{
		cout << "Unesi neki broj izmedju 10 i 100:" << endl;
		cin >> x;

	} while (x < 10 || x>100);

	return x;
}

int unosn()
{
	int x;
	do
	{
		cout << "Unesi neki broj izmedju 500 i 2000:" << endl;
		cin >> x;

	} while (x < 500 || x>2000);

	return x;

}

bool slozeni(int x)
{
	if (x <= 1)
	{
		return false;
	}
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return true;
		}
	}

	return false;
}

void ispis(int x, int y)
{
	for (int i = x; i <= y; i++)
	{
		if (slozeni(i))
		{
			cout << i << " ";
		}
	}
}

double ArtimetickaSredina(int x, int y)
{
	int brojac = 0;
	int suma = 0;
	for (int i = x; i <= y; i++)
	{
		if (slozeni(i))
		{
			suma += i;
			brojac++;
		}
	}

	return double(suma) / brojac; //bacamo sumu u double radi preciznijeg ispisa
}