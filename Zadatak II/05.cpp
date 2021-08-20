#include<iostream>
using namespace std;

bool isProst(int);
void Goldbach(int, int);
int unos();

int main()
{
	int n1 = unos();
	int n2 = unos();

	if (n1 > n2)
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}

	Goldbach(n1, n2);

	cin.get();
	return 0;
}

int unos()
{
	int x;
	do
	{
		cout << "Unesi prirodan broj:" << endl;
		cin >> x;

	} while (x < 1);

	return x;
}

bool isProst(int x)
{
	if (x <= 1)
	{
		return false;
	}
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}

	return true;
}

void Goldbach(int n1, int n2)
{
	if (n1 % 2 != 0)
	{
		n1++;
	}
	for (int i = n1; i <= n2; i += 2)
	{
		for (int j = i / 2, k = i / 2; j <= i; j++, k--)
		{
			if (isProst(j) && isProst(k))
			{
				if (j + k == i);
				{
					cout << j << "+" << k << "=" << i << endl;
					break;
				}
			}

		}
	}
}