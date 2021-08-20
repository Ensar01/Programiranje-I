#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;

int unos();
bool isSavrsen(int);
float simulacija(int);

int main()
{
	int n = unos();

	srand(time(NULL));

	cout << "Procenat savrsenih brojeva u " << n << " slucajnih vrijednosti iznosi: " << simulacija(n) << "%" << endl;



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

bool isSavrsen(int x)
{
	int s = 0;

	for (int i = 1; i < x; i++)
	{
		if (x % i == 0)
		{
			s += i;
		}

	}

	if (x != s)
	{
		return false;
	}

	return true;
}

float simulacija(int x)
{
	int brojac = 0;

	for (int i = 0; i < x; i++)
	{
		int sluc = rand() % 1000 + 1;


		if (isSavrsen(sluc))
		{
			brojac++;
		}

	}

	return float(brojac) / x * 100;
}