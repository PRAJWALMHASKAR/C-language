/* program for stroimg functions */
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[20] = "BeginnersBook";
     char s2[20] = "BeginnersBook.COM";
    char s3[30] = "string 1";
     char s4[30] = "string 2 : I’m gonna copied into s1";
      char s5[10] = "Hello";
     char s6[10] = "World";
       char str1[20] = "BeginnersBook";
if (strcmp(s1, s2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }else
      {
         printf("string 1 and 2 are different");
      }
     strcat(s3,s4);
     printf("Output string after concatenation: %s", s3);
     strcpy(s5,s6);
     printf("String s1 is: %s", s5);
     printf("Length of string str1: %d", strlen(str1));    
     return 0;
}

/*
********************************  output  **************************************
dell@dell-OptiPlex-7040:~$ gcc string.c
string.c: In function ‘main’:
string.c:9:20: warning: initializer-string for array of chars is too long [enabled by default]
      char s4[30] = "string 2 : I’m gonna copied into s1";
                    ^
string.c:24:6: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘size_t’ [-Wformat=]
      printf("Length of string str1: %d", strlen(str1));    
      ^
dell@dell-OptiPlex-7040:~$ ./a.out
string 1 and 2 are differentOutput string after concatenation: string 1string 2 : I’m gonna copied String s1 is: WorldLength of string str1: 13dell
*********************************  output  *************************************
*/
