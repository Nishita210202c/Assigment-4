//5. Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int n=1, i;
    printf("print the first 10 odd natural numbers in reverse order:\n ");

    for(i=10; i>=n; i--)
    {
        printf("%d\n", 2*i-1);
    }
    return 0;
}