//4. Write a program to print the first 10 odd natural numbers.

#include<stdio.h>
int main()
{
    int  i=1, n=10;
    printf("\nprint the first 10 odd natural numbers:\n");
    while(i<=n)
    {
      
      printf("%d\n", 2*i-1);
      i++;
    }
}    