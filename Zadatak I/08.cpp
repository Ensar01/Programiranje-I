#include<iostream>
using namespace std;

int obrni(int);
int sum(int);
int unos();

int main()
{
	int X = unos();
	int Y = unos();

	if (X > Y)
	{
		int temp = X;
		X = Y;
		Y = temp;
	}

	for (int i = X; i <= Y; i++)
	{
		if (obrni(i) % sum(i) == 0)
		{
			cout << i << " ";
		}
	}


	cin.get();
	return 0;

}

int unos()
{
	int x;

	do
	{
		cout << "Unesi broj izmedju 10 i 5000:" << endl;
		cin >> x;

	} while (x < 10 || x>5000);

	return x;
}

int obrni(int x)
{
	int novi = 0;
	while (x > 0)
	{

		int temp = x % 10;

		novi = novi * 10 + temp;

		x /= 10;
	}

	return novi;
}

int sum(int x)
{
	int s = 0;

	while (x > 0)
	{
		s += x % 10;

		x /= 10;
	}

	return s;
}
