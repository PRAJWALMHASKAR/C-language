/* program for pallindrome */

#include <stdio.h>
int main()
{
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalInteger = n;

    // reversed integer is stored in variable 
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    // palindrome if orignalInteger and reversedInteger are equal
    if (originalInteger == reversedInteger)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
    return 0;
}

/*

guest-uniqwq@it-l1-pc18:~$ gcc pallindrome.c
guest-uniqwq@it-l1-pc18:~$ ./a.out
Enter an integer: 2345
2345 is not a palindrome.

*/
