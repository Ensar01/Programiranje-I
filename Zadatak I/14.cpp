#include<iostream>
using namespace std;

int main()
{
	const float g = 9.81;

	for (int i = 1, t = 3; i <= 20; i++, t += 3)
	{
		cout << "Situacija u " << t << "-oj sekundi je:" << endl;
		cout << "Brzina: " << g * t << endl;
		cout << "Predjeni put: " << g / 2 * pow(t, 2) << endl;

	}

	cin.get();
	return 0;
}