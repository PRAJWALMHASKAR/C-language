#include<stdio.h>
#include<stdlib.h>
void main()
{ 
	int no; 
	printf("Please Enter the number:"); 
	scanf("%d",&no);
	 int sum=0; int length=0; int no_counting=no; 
	 while(no_counting!=0)
	 { 
	 	length++; 
	 	no_counting=(no_counting/10);
	 	} 
	 	int last;
	 	while(length!=0)
	 	{ 
	 		last=no%10;
	 		 sum =sum + last;
	 		  no = no/10; 
	 		  length--;
	 		  }
	 		  printf("The sum is %d",sum);
	 		  char c;
}