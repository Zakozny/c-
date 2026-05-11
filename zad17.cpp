#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double liczba;
	cout <<"podaj liczbe do sprawdzenia czy mieœci siê w przedziale liczb od (-5;6)"<< endl;
	cin >> 	liczba;
	if (liczba > -5 && liczba < 6){
	cout<<"liczba jest w przedziale od (-5;6)"<< endl;
	} else{
		cout<<"liczba nie jest w przedziale";
	}
	return 0;
}

