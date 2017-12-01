#include<stdio.h>
void chck_num_even_odd(int a)
{ 
	if(a%2==0)
	{ 
		printf("No entered is even"); 
		} 
		else
		{
			 printf("No entered is odd"); 
			 } 
			 } 
			 //this is the main function// 
	void main()
	{ 
		printf("Please enter an integer:"); 
		int no;
		scanf("%d",&no);
		 chck_num_even_odd(no);
		 }