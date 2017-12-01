#include<stdio.h>void main()
{
	printf("Please Enter the First String:");
char First[100];
gets(First);
printf("Enter the second string:");
char Sceond[100];
gets(Sceond);
strcat(First,Sceond);
printf("The concated string is:%s",First);
 }