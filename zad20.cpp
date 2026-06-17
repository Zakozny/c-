#include <iostream>

using namespace std;

int main()
{
    float bok, pole;
    char odp;

    do
    {
        cout << "Podaj bok kwadratu w centymetrach: ";
        cin >> bok;

        if (bok > 0)
        {
            pole = bok * bok;
            cout << "Pole kwadratu = " << pole << " cm^2" << endl;
        }
        else
        {
            cout << "Bok musi byc wiekszy od zera" << endl;
        }

        cout << "Jesli chcesz powtorzyc program, nacisnij t (tak): ";
        cin >> odp;

    } while (odp == 't' || odp == 'T');

    return 0;
}
