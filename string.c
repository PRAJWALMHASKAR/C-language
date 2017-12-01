#include<stdio.h>
void main()
{
	char *str_one=(char*)malloc(sizeof(int)*100);
	printf("Please enter the String:");
	gets(str_one);
	printf("This is the original string:%s\n",str_one);
	 char *str_two=(char*)malloc(sizeof(int)*100);
	 str_two=str_one;
	 printf("This is the copied string:%s",str_one);
}