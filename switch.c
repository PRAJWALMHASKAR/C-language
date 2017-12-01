#include<Stdio.h>
#include<stdlib.h>
void main()
{
	printf("Enter The String:");
	char Stringg[1000];
	int n=strlen(gets(Stringg));
	int len=100;int i=0;while(i<n)
	{ 
		char a=Stringg[i]; 
		switch(a)
		{
			 case 'a':
			 printf("Vowel:a\n");
			  break;
			  case 'e':
			  printf("Vowel:e\n");
			   break; 
			   case 'i':
			   printf("Vowel:i\n");
			    break; case 'o':
			    printf("Vowel:o\n"); 
			    break; 
			    case 'u':
			    printf("Vowel:u\n"); 
			    break; 
			    case '\0':
			    printf("NULL"); 
			    break; 
			    case ' ':
			    printf("Space\n");
			     break; 
			     case '*' : 
			     printf("Star:*\n"); 
			     break; 
			     default:;
			      } 
			      i++;
			      }
}