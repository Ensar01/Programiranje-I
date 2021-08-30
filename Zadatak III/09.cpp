//Radi do 1023 sve povis je izvan range-a int-a

#include<iostream>
using namespace std;

int konverzijaBinarni(int);

int main()
{
    int x;
    cout << "Unesi neki broj koji zelite pretvoriti u binarni:" << endl;
    cin >> x;

    cout << x << " u binarnom sistemu iznosi: " << konverzijaBinarni(x);

    cin.get();
    return 0;
}

int konverzijaBinarni(int x)
{
    if (x == 0)
    {
        return 0;
    }
    else
    {
        return(x % 2 + 10 * konverzijaBinarni(x / 2));
    }
}
