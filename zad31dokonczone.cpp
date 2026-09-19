#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
	
	int miesiac_Mat;
	
	cout<<"podaj miesi¹c twojego urodzenia";
	cin>>miesiac_Mat;
	
	for (int i = miesiac_Mat + (miesiac_Mat % 1); i <= miesiac_Mat +30; i += 1)
	{
	cout << i << " ";
}
	
	return 0;
}
