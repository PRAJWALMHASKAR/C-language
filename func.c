#include<Stdio.h>
int fact(int *a)
{
	if(*a==1||*a==0)
{ 
	return 1;
	}
	else
	{ 
		return((*a)*fact(a-1));
	}
	}
	void main()
	{ 
		int b;
		printf("Enter The Number");
		scanf("%d",&b);
		int *p;
		*p=&b;
        printf("%d",fact(*p));
        }