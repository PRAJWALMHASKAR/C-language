#include<stdio.h>
void main()
{
 int n;
 long int i;
 long int fibo(int n);
 printf("Enter the limit:\n");
 scanf("%d",&n);
   i=fibo(n);
 printf("\nThe %dth Fibonacci number is %ld",n,i);
}

long int fibo(int n)
{
 int old_no,currnt_no,sum,i;
   i=1;
   old_no=0;
   currnt_no=1;
   while(i<=n)
   {
      sum=old_no+currnt_no;
      old_no=currnt_no;
      currnt_no=sum;
      i++;
      printf("\n%d",sum);
   }
 return(sum);
}