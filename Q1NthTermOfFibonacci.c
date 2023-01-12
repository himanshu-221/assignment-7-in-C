// Write a program to find the Nth term of the Fibonnaci series
#include<stdio.h>
int main()
{
    int num,i,a=0,b=1,fib=0;
    printf("Enter term number\n");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        fib=a+b;
        a=b;
        b=fib;
    }
    printf("The %dth term of fibonacci series is %d",num,fib);
    return 0;
}