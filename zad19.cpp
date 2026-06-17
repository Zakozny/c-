#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;
    
    if (liczba > 0) {
        cout << "liczba wieksza zera" << endl;
    }
    if (liczba == 0) { 
        cout << "liczba rowna zero" << endl;
    }
    if (liczba < 0) {
        cout << "liczba mniejsza od zera" << endl;
    }
    
    return 0;
}
