// Write a program to print first N terms of Fibonacci series
#include<stdio.h>
int main()
{
    int n,i,fib,fib1=0,fib2=1;
    printf("Enter value of terms\n");
    scanf("%d",&n);
    printf("%d Terms of fibonacci series are:-\n",n);
    printf("%d  ",fib2);
    for(i=2;i<=n;i++)
    {
        fib=fib1+fib2;
        printf("%d  ",fib);
        fib1=fib2;
        fib2=fib;
    }
    return 0;
}