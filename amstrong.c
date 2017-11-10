/* program for checking amstrong number */
#include<stdio.h>
void main()
{
int n,a=0,i,j;
printf("enter a number to check for amstrong condition = ");
scanf("%d",&n);
j=n;
while(n!=0)
{
i=n%10;
a=a+i*i*i;
n=n/10;
}
printf("display calculated number = %d \n",a);
if(a==j)
{
printf("entered number is an amstrong number \n");
}
else
{
printf("entered number is not an amstrong number \n");
}
}

/*
********************************  output  **************************************

	dell@dell-OptiPlex-7040:~$ gcc amstrong.c
	dell@dell-OptiPlex-7040:~$ ./a.out
	enter a number to check for amstrong condition = 371
	display calculated number = 371 
	entered number is an amstrong number 
	dell@dell-OptiPlex-7040:~$ gcc amstrong.c
	dell@dell-OptiPlex-7040:~$ ./a.out
	enter a number to check for amstrong condition = 567 
	display calculated number = 684 
	entered number is not an amstrong number 

*********************************  output  *************************************
*/
