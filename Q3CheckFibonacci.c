/* Write a program to check whether a given number is there in the Fibonacci series or
not.*/

#include<stdio.h>
int main()
{
    int fib1=0,fib2=1,i,fib=0,num,flag=1;
    printf("Enter a number to check fibonacci\n");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        fib=fib1+fib2;
        if(fib==num)
        {
            flag++;
            break;
        }
        fib1=fib2;
        fib2=fib;
    }
    if(flag==2)
    {
        printf("%d is present in fibonacci series.",num);
    }
    else{
        printf("The number is not present in the fibonacci series.");
    }
    return 0;
}