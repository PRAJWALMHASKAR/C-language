#include<stdio.h>
#include<math.h>
void main()
{
	int n=0; 
while(n < 100)
{ 
	double phi =1.6180339887498948; 
	double phiminus1=-0.61803398874989484820; 
	double idk = pow(phi,n); 
	double idk2=pow(phiminus1,n);
	 double idk3 = idk -idk2; 
	 double ah = idk3/2.23606798; 
	 printf("%d",nearbyint(ah)); 
	 printf("\t"); n++;
	 }
	  }