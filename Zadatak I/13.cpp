#include<iostream>
using namespace std;

double proracun(int, char);

int main()
{
	float x;
	cout << "Unesi neki realan broj:" << endl;
	cin >> x;

	char znak;
	do
	{

		cout << "Unesite karakter s-(sin) ili c-(cos) u zavisnosti koju funkciju zelite:" << endl;
		cin >> znak;

		if (znak != 's' && znak != 'c')
		{
			cout << "Unos nije validan" << endl;
		}


	} while (znak != 's' && znak != 'c');

	cout << "Rezultat odabrane funkcije '" << znak << "' iznosi: " << proracun(x, znak);


	cin.get();
	return 0;
}

double proracun(int x, char znak)
{
	float s = 1.0f;

	if (znak == 's')
	{
		for (int i = 1; i <= x; i++)
		{
			s += i / (sin(x / i) + x);
		}

	}
	else if (znak == 'c')
	{
		for (int i = 1; i <= x; i++)
		{
			s += i / (cos(x / i) + x);
		}

	}
	else
	{
		cout << "Unos nije validan" << endl;
	}

	return s;
}

