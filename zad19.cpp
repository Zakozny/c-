#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <streambuf>
#include <ios>
#include <iosfwd>
using namespace std;
	
int main(int argc, char** argv) {
	 system ("cls");
 system ("chcp 1250");

 int liczba, wynik;

	cout<< "podaj liczbe ca³kolwit¹";
	cin>> liczba ;
	
	if(liczba > 0){
	cout<<"liczba wieksza o";
}
	if(liczba = 0){
		cout<<"liczba rowna zero";
	}
	if(liczba < 0){
		cout<<"liczba mniejsza od zera";
	}
	return 0;
}
