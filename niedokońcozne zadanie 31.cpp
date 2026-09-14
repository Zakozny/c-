#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
float a, sigma=0; 
 for (;;) // nieskoñczona pêtla
 { 
 printf("\n Podaj  miesi¹c twojego urodzenia\n 	"); 
 scanf("%f", &a); 
  if (a>0) continue;
 if (a==0) break;  
 sigma+=a; // inaczej sigma = sigma + a;
 printf("\n SUMA CZESCIOWA: %f",sigma); 
 } 
 printf("Nastapil BREAK \n"); 
 system("PAUSE");
 return EXIT_SUCCESS;
}

