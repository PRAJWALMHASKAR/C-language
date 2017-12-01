#include<stdio.h>
int prime(int prime)
{ 
	int divisor=2;
	int end=prime-1;
	 while(divisor!=end)
	 { 
	 	if(prime%divisor==0)
	 	{ 
	 		printf("Not ");
	 		 break; 
	 		 } 
	 		 divisor++;
	 		  }
	 		  }
	 		  //this main function will just take in a number from the user and if its prime it//
	 		  	void main()
	 		  	{ 
	 		  		int number; 
	 		  		printf("Please enter the number:");
	 		  		 scanf("%d",&number);
	 		  		  prime(number); 
	 		  		  printf("Prime No");
}