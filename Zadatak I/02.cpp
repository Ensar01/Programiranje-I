#include<iostream>
using namespace std;

int unos();

int main()
{
	int x;
	int temp = 0;

	do
	{
		cout << "Upisi cifru: ";
		x = unos();

		if (x < 0)
		{
			break;
		}
		if (x > 9)
		{
			cout << "Cifra nije validna" << endl;
		}
		else
		{
			temp = temp * 10 + x;
		}

	} while (x >= 0);

	cout << "Sastavljeni broj je: " << temp << endl;


	cin.get();
	return 0;
}

int unos()
{
	int x;
	cin >> x;
	return x;
}