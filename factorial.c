/* factorial of given number */
#include<stdio.h>
void main()
{
int f=1,n,i;
printf("enter the no. to calculate its factorial\n");
scanf("%d",&n);
for(i=n;i>0;i--)
{
f=f*i;
}
printf("display factorial of %d = %d \n",n,f);
}

/*
*****************************  output  ***********************************

dell@dell-OptiPlex-7040:~$ gcc factorial.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter the no. to calculate its factorial
5
display factorial of 5 = 120 

******************************  output  **********************************
*/
