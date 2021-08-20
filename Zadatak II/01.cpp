#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int simulacija();

int main()
{

	srand(time(NULL));

	cout << "Broj ponavljanja dok uslov nije bio zadovoljen iznosi: " << simulacija() << endl;


	cin.get();
	return 0;
}

int simulacija()
{
	int uzastopni = 0;
	int brojac = 0;
	do
	{
		int k1 = rand() % 6 + 1;
		int k2 = rand() % 6 + 1;
		int k3 = rand() % 6 + 1;

		if (k1 == k2 && k2 == k3)
		{
			uzastopni++;
			brojac++;
		}
		else
		{
			uzastopni = 0;
			brojac++;
		}

	} while (uzastopni < 2);


	return brojac;
}