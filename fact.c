#include<stdio.h>
//this is the function to calculate the factorial//
void factorial(int no)
{ int i= no; while(i>1)
{ 
	--i; 
	no= no* i;
	} 
printf("%d",no);
} 
//this is the main function//
	void main()
	{ 
		int input; 
		scanf("%d",&input);
		 factorial(input);
		  }