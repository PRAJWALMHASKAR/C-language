#include<stdio.h>
void main()
{
	int i,j;
	char f[10]={"PRAJWAL"};
	char s[10]={"MHASKAR"};
	char n[20];
	for(i=0;f[i]!='\0';i++)
	n[i]=f[i];
	n[i]=' ';
	for(j=0;s[j]!='\0';j++)
	n[i+j+1]=s[j];
	n[i+j+1]='\0';
	printf("\n\n");
	printf("%s\n",n);
}