#include<iostream>
#include<cmath>
using namespace std;

double sum(float, int);

int main()
{
	int n;
	float x;

	cout << "Unesi prirodan broj n:" << endl;
	cin >> n;

	cout << "Unesi realan broj x:" << endl;
	cin >> x;

	cout << "Iznos funkcije je: " << sum(x, n) << endl;

	cin.get();
	return 0;
}

double sum(float x, int n)
{
	double s = 0.0;

	for (int i = 1; i <= n; i++)
	{
		s += cos(pow(x, i));
	}

	return s;
}