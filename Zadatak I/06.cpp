#include<iostream>
using namespace std;

int isFact(int);
int sum(int);
void ispis();


int main()
{
	ispis();


	cin.get();
	return 0;
}

int isFact(int x)
{
	int f = 1;

	for (int i = 1; i <= x; i++)
	{
		f *= i;
	}

	return f;
}

int sum(int x)
{
	int s = 0;

	while (x > 0)
	{
		s += isFact(x % 10);
		x /= 10;
	}

	return s;
}

void ispis()
{
	for (int i = 100; i <= 999; i++)
	{
		if (i == sum(i))
		{
			cout << i << " ";
		}

	}
}