#include <iostream>
using namespace std;

double fun(double mat)
{
    if (mat >= 1 || mat <= -1)
        return 1;
    else
        return mat * mat;
}

int main()
{
    double mat, atl;
    char lac;

    do
    {
        cout << "Podaj liczbe x: ";
        cin >> mat;

        atl = fun(mat);

        cout << "f(x) = " << atl << endl;

        cout << "Jesli powtorzyc program wcisnij klawisz a" << endl;
        cout << "W przeciwnym wypadku wcisnij dowolny klawisz literowy" << endl;
        cin >> lac;

    } while (lac == 'a' || lac == 'A');

    return 0;
}	
