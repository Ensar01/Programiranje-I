#include<iostream>
using namespace std;

int unos();
int obrni(int);

int main()
{

	int A = unos();

	cout << "Kada obrnemo broj " << A << " i uklonimo parne cifre dobijemo broj: " << obrni(A) << endl;


	cin.get();
	return 0;
}

int unos()
{
	int x;

	do
	{
		cout << "Unesi prirodan broj veci od 100000:" << endl;
		cin >> x;

	} while (x <= 100000);

	return x;
}

int obrni(int x)
{
	int novi = 0;

	while (x > 0)
	{
		int temp = x % 10;

		if (temp % 2 != 0)
		{
			novi = novi * 10 + temp;
		}
		x /= 10;
	}

	return novi;

}