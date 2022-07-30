//6. Write a program to print the first 10 even natural numbers

#include<stdio.h>
int main()
{
    int i=1, n=10;
    printf("print the first 10 even natural numbers:\n");

    while(i<=n)
    {
        printf("%d\n", i*2);
        i++;
    }
}    