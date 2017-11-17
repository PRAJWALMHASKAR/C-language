/* to calculcate sum and average of elements in an array */
#include<stdio.h>
void main()
{
int a[10],i,sum=0,avg;
printf("enter 10 elements in array");
for (i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=10;i++)
{
sum=sum+a[i];
}
avg=sum/10;
printf("sum=%d",sum);
printf("avg=%d",avg);
}

/*

guest-uniqwq@it-l1-pc18:~$ gcc array.c
guest-uniqwq@it-l1-pc18:~$ ./a.out
enter 10 elements in array
223
3
45
6
43
32
8
76
5
89
*** stack smashing detected ***: ./a.out terminated
sum=530avg=53Aborted (core dumped)

s*/
