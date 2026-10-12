#include <cstdlib> 
#include <iostream> 
#include <stdio.h> 
#include <conio.h> 

using namespace std;



int main(int argc, char** argv) {
	int numer;

	
	cout<< "podaj numer w dzienniku=";
	cin>>numer;
	
	for(int i = 160 + numer; i <=200 + numer; i++)
	{
		double y = sqrt((double)i);
		printf("sqrt(%d)=%6.2f\n", i,y);
	}
	system("PAUSE");
	return 0;
}
