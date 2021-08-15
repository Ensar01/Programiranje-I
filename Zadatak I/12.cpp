#include<iostream>
using namespace std;

int unos();
bool provjera(int);
void ispis(int, int);



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

	ispis(X, Y);
}

int unos()
{
	int x;

	do
	{
		cout << "Unesi neki broj od 10 do 6000:" << endl;
		cin >> x;

	} while (x < 10 || x>6000);

	return x;
}

bool provjera(int x)
{
	int y = x;

	while (x > 0)
	{
		int temp = x % 10;

		if (temp == 0)
		{
			return false;
		}

		if (y % temp != 0)
		{
			return false;
		}

		x /= 10;
	}
	return true;
}

void ispis(int x, int y)
{
	for (int i = x; i <= y; i++)
	{
		if (provjera(i) == true)
		{
			cout << i << " ";
		}
	}
}
