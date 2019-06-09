#include<stdio.h>
void main()
{ 
	printf("Enter the no of lines you want");
	int counter;
	scanf("%d",&counter);
	int i=0;int q=counter; 
	while (i<counter)
	{
		q=counter;
		while(q>i){
			 printf(" ");
			  q--;
			   }
			   int iL=0; 
			   while(iL<=i){
			   	 printf("*"); 
			   	 iL++; 
			   	 if(iL>1){
			   	 	 printf("*"); 
			   	 	 }
			   	 	  }
			   	 	   printf("\n");
			   	 	   i++; 
			   	 	   } 
			   	 	   }
