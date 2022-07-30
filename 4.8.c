//8. Write a program to print squares of the first 10 natural numbers

#include<stdio.h>
int main()
{
    int i, n=10;
    printf("print squares of the first 10 natural numbers: \n");

    for(i=1; i<=n; i++)
    {
        printf("%d\n", i*i);
    }
    return 0;
}