/* to calculcate maximum and minimum elements in an array */
#include<stdio.h>
void main()
{
int a[10],i,max=a[1],min=a[1];
printf("enter 10 elements in array");
for (i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=10;i++)
{
if(max<=a[i])
{
max=a[i];
}
if(min>=a[i])
{
min=a[i];
}
}
printf("max=%d min=%d",max,min);
}

/*

guest-uniqwq@it-l1-pc18:~$ gcc maxarray.c
guest-uniqwq@it-l1-pc18:~$ ./a.out
enter 10 elements in array
2
54
5576
8
55
5
568
9
2
3
*** stack smashing detected ***: ./a.out terminated
max=5576 min=05Aborted (core dumped)

*/
