//Write a program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter a number to check armstrong number.\n");
    scanf("%d",&num);
    int n=num;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        sum+=rem*rem*rem;
    }
    if(sum==n)
    printf("number is armstrong %d",sum);
    else
    printf("Number is not armstrong");
    return 0;
}