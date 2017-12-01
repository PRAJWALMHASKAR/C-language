#include<stdio.h>
#include<stdlib.h>
void main()
{
	int size = 25;
	 char *str1 = (char *)malloc(sizeof(char)*size); 
	 printf("Please enter the no:");
	 gets(str1);
	 puts(str1);
	 int a = strlen(str1);
	 printf("%d\n",a);
	 printf("%c",str1[1]);
	 int i=0;
	 int add=0;
	 printf("%c",str1[1]);
	  while(i<3)
	  {
	  	 int aaa =(int)str1[i];
	  	  add=add+aaa;
	  	  i++;
	  	   }
	  	   printf("%d",add);
 }