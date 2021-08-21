#include<iostream>
using namespace std;


int main()
{
	const float GrastA = 2.05, GrastB = 2.80, GrastC = 4.30;

	double firmaA = 10, firmaB = 7, firmaC = 5;

	int brGodina = 0;

	while (firmaC < firmaA || firmaB < firmaA)
	{
		firmaA = firmaA + (firmaA * GrastA / 100.0);
		firmaB = firmaB + (firmaB * GrastB / 100.0);
		firmaC = firmaC + (firmaC * GrastC / 100.0);

		brGodina++;
	}

	if (firmaB > firmaC)
	{
		cout << "Firma B je prva prestigla firmu a za " << brGodina << " godina" << endl;
	}
	else
	{
		cout << "Firma B je prva prestigla firmu a za " << brGodina << " godina" << endl;
	}

	cout << "Godisnji prihod Firme A u " << brGodina << ". godini iznosi: " << firmaA << "M eura" << endl;
	cout << "Godisnji prihod Firme B u " << brGodina << ". godini iznosi: " << firmaB << "M eura" << endl;
	cout << "Godisnji prihod Firme C u " << brGodina << ". godini iznosi: " << firmaC << "M eura" << endl;

	cin.get();
	return 0;
}