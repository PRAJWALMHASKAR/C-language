/* program for liunear search */

#include <stdio.h>
void main()
{
    int a[10], i, item;
    printf("\nEnter SEVEN elements of an array:\n");
    for (i=0; i<=6; i++)
        scanf("%d", &a[i]);
    printf("\nEnter item to search: ");
    scanf("%d", &item);
    for (i=0; i<=9; i++)
        if (item == a[i])
        {
            printf("\nItem found at location %d", i+1);
            break;
        }
    if (i > 9)
        printf("\nItem does not exist.");
}

/*

guest-uniqwq@it-l1-pc18:~$ gcc linearsearch.c
guest-uniqwq@it-l1-pc18:~$ ./a.out

Enter SEVEN elements of an array:
34
57
24
8
85
89
4

Enter item to search: 8

Item found at location 4

*/
