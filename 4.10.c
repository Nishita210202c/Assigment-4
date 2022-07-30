//10. Write a program to print a table of 5.

#include<stdio.h>
int main()
{
    int n=10, i;
    printf(" print a table of 5:\n ");

    for(i=1; i<=n; i++)
    {
        printf("5 x %d = %d\n", i, 5*i );
    }
    return 0;
}