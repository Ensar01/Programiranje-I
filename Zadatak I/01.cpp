#include<iostream>
using namespace std;

int isFact(int);
int sum(int);

int main()
{
	int N;

	cout << "Unesi neki cijeli broj N" << endl;
	cin >> N;

	cout << "Suma faktorijela svih neparnih brojeva od 1 do " << N << " je " << sum(N);


	cin.get();
	return 0;
}

int isFact(int x)
{
	int f = 1;

	for (int i = 2; i <= x; i++)
	{
		f *= i;
	}

	return f;
}
int sum(int x)
{
	int s = 0;

	for (int i = 1; i <= x; i++)
	{
		if (i % 2 != 0)
		{
			s += isFact(i);
		}
	}

	return s;
}