#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int unos();
int KOCKA();

int main()
{
	srand(time(NULL));

	int n = unos();

	int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;

	for (int i = 0; i < n; i++)
	{
		int kocka = KOCKA();

		switch (kocka)
		{
		case 1: {

			c1++;
		}break;

		case 2: {

			c2++;
		}break;

		case 3: {

			c3++;
		}break;

		case 4: {

			c4++;
		}break;

		case 5: {

			c5++;
		}break;

		case 6: {

			c6++;
		}break;
		default:
		{
			cout << "Unos nije validan!" << endl;
		}
		}

		cout << kocka << " ";
	}

	cout << endl;

	cout << "Procenat broja 1 u " << n << " bacanja iznosi: " << float(c1) / n * 100 << "%" << endl;
	cout << "Procenat broja 2 u " << n << " bacanja iznosi: " << float(c2) / n * 100 << "%" << endl;
	cout << "Procenat broja 3 u " << n << " bacanja iznosi: " << float(c3) / n * 100 << "%" << endl;
	cout << "Procenat broja 4 u " << n << " bacanja iznosi: " << float(c4) / n * 100 << "%" << endl;
	cout << "Procenat broja 5 u " << n << " bacanja iznosi: " << float(c5) / n * 100 << "%" << endl;
	cout << "Procenat broja 6 u " << n << " bacanja iznosi: " << float(c6) / n * 100 << "%" << endl;

	cin.get();
	return 0;
}

int unos()
{
	int x;

	do
	{
		cout << "Unesi neki broj izmedju 10 i 1000" << endl;
		cin >> x;

	} while (x <= 10 || x >= 1000);

	return x;
}

int KOCKA()
{
	int kocka;

	kocka = rand() % 6 + 1;

	return kocka;
}