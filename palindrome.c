#include<stdio.h>
#include <string.h> 
void main()
{
	char c[100];
	printf("Enter Word:");
	int len=strlen(gets(c));
	char dd[100];
	int ii=0;
	while(ii<len)
	{
		 dd[ii]=c[ii]; 
		 ii++;
		 }int i=0;
		 int temp;
		 int len2;
		 while(i<len)
		 {
		 	 temp=c[i];
		 	  c[i]=c[len-1];
		 	   c[len-1]=temp; 
		 	   i++;len--;
		 	    }
		 	     printf("%The reversed word is %s\n",c);
		 	      i=0;
		 	      while(i<len)
		 	      {
		 	      	 if(c[i]!=dd[i])
		 	      	 {
		 	      	 	 printf("Not ");
		 	      	 	  break; 
		 	      	 	  } 
		 	      	 	  i++;
		 	      	 	  }
		 	      	 	  printf("Palindrome");
 }