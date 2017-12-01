#include <stdio.h>
 //Compiler version gcc 6.3.0
 void main()
 {
 	int f=0,g=1,h,n,i=1;
 	printf("enter the no. of items");
 	scanf("%d",&n);
 	printf("%d %d",f,g);
 	while(i<=n-2)
 	{
 		h=f+g;
 		printf("%d",h);
 		f=g;
 		g=h;
 		i++;
 		
 	}
 	
 }
 