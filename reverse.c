/* program for reversing the given number */
#include<stdio.h>
void main()
{
int n,reverse=0;
printf("enter a number to reverse = ");
scanf("%d",&n);
while(n!=0)
{
reverse=reverse*10+n%10;
n=n/10;
}
printf(" \n display the reversed number = %d \n ",reverse);
}

/*
*********************************  output  *************************************

	dell@dell-OptiPlex-7040:~$ gcc reverse.c
	dell@dell-OptiPlex-7040:~$ ./a.out
	enter a	number to reverse = 5867
	display the reversed number = 7685 

*********************************  output  *************************************
*/
