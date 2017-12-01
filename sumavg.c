#include<stdio.h>
void main()
{ 
	int integer[5]={0,1,2,3,4,5};int sum=0;int i=0;int avg;
	while(i<=5)
	{
	sum+=integer[i]; 
	i++; 
	}
	avg = (sum/5); 
	printf("The sum is %d\n",sum);
	printf("The avg is %d",avg);
 }