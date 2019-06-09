#include<stdio.h>
void main()
{
	printf("Please enter the number whose multiplication table u want and how long u want:");
	int a;int b;
	scanf("%d%d",&a,&b);
	int i=1;int multi;
	while(i<=b)
	{ 
		multi = a*i;
		 printf("%dX%d=",a,i); 
		 printf("%d\n",multi);
		  i++;
		  }
 }
