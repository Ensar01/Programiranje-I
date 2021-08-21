#include<iostream>
using namespace std;

float funkcija(float, int, char);

int main()
{
	float x;
	cout << "Unesi neki realan broj: " << endl;
	cin >> x;

	int m;
	cout << "Unesi neki cijeli broj: " << endl;
	cin >> m;

	char znak;

	do
	{
		cout << "Unesi neki od sljedecih karaktera: 's' - (sin), 'c' - (cos), 'q' - (sqrt), 'p' - (pow)" << endl;
		cin >> znak;

		if (znak != 's' && znak != 'c' && znak != 'q' && znak != 'p')
		{
			cout << "Unos nije validan!" << endl;
		}

	} while (znak != 's' && znak != 'c' && znak != 'q' && znak != 'p');

	cout << "Rezultat odabranog izraza " << znak << " iznosi: " << funkcija(x, m, znak) << endl;

	cin.get();
	return 0;
}
float funkcija(float x, int m, char znak)
{
	float rez = 0.0f;

	if (znak == 's')
	{
		for (int i = 1; i <= m; i++)
		{
			rez += (sin(x) + i);
		}

	}
	if (znak == 'c')
	{
		for (int i = 1; i <= m; i++)
		{
			rez += (cos(x) + i);
		}
	}
	if (znak == 'q')
	{
		for (int i = 1; i <= m; i++)
		{
			rez += (sqrt(x) + i);
		}

	}
	if (znak == 'p')
	{
		for (int i = 1; i <= m; i++)
		{
			rez += (pow(x, 3) + i);
		}

	}

	return rez;
}