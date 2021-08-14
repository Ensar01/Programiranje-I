#include<iostream>
#include<cmath>


using namespace std;

float sum(int);

int main()
{
	int n;
	cout << "Unesi prirodan broj n" << endl;
	cin >> n;

	cout << "Suma zadane funkcije je: " << sum(n) << endl;

	cin.get();
	return 0;
}
float sum(int x)
{
	float s = 0.0f;

	for (int i = 1; i <= x; i++)
	{
		s += 1 / pow(2 * i + 1, 2);
	}

	return s;
}
