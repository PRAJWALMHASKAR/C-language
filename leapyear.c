#include<stdio.h>
void leap(int year)
{
	int no;
if(year%4==0)
{ 
	no =0;
	}
	if(year%100==0)
	{ 
		no = 1;
		}
		if(year%400==0)
		{ 
			no=0;
			}
			 if(no==0)
			 {
			 	 printf("Leap Year"); 
			 	 }
			 	  else
			 	  {
			 	  	 printf("Not leap Year"); 
			 	  	 } 
			 	  	 } 
			 	  	 void main()
			 	  	 { int yearr;
			 	  	  printf("Enter the year:"); 
			 	  	  scanf("%d",&yearr); 
			 	  	  leap(yearr); 
}