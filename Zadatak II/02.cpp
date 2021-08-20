#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int unos();
bool isProst(int);
float simulacija(int);

int main()
{


	int n = unos();

	cout << "Procenat prostih u " << n << " slucajnih vrijednosti iznosi: " << simulacija(n) << "%" << endl;

	srand(time(NULL));
	cin.get();
	return 0;
}

int unos()
{
	int x;

	do
	{
		cout << "Unesi neki broj izmedju 10 i 1000:" << endl;
		cin >> x;

	} while (x <= 10 || x >= 1000);

	return x;
}

bool isProst(int x)
{
	if (x <= 1)
	{
		return false;
	}
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}

	return true;
}

float simulacija(int x)
{
	int brojac = 0;

	for (int i = 0; i < x; i++)
	{
		int sluc = rand() % 1000 + 1;

		if (isProst(sluc))
		{
			brojac++;
		}

	}

	return float(brojac) / x * 100;
}