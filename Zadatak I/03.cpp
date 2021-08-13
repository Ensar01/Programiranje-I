#include <iostream>
#include<iomanip>
using namespace std;


float GS(int);

int main()
{

	int N;
	cout << "Unesi cijeli broj N" << endl;
	cin >> N;

	cout << "Geometrijska sredina svih neparnih brojeva koji nisu djeljivi sa 5 od 1 do " << N << " iznosi " << setprecision(3) << GS(N) << endl;



	cin.get();
	return 0;
}

float GS(int x)
{
	float gs = 1.0f;
	int brojac = 0;

	for (int i = 1; i <= x; i += 2)
	{
		if (i % 5 != 0)
		{
			gs *= i;
			brojac++;
		}
	}

	return pow(gs, 1 / float(brojac));
}