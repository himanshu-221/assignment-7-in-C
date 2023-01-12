//Write a program to print all Prime numbers between two given numbers.
#include<stdio.h>
int main()
{
    int num1,num2,i,j,flag=0,min,max;
    printf("Enter two numbers between you want to print prime numbers.\n");
    scanf("%d %d",&num1,&num2);
    min=num1<num2?num1:num2;
    max=num1>num2?num1:num2;
    printf("Prime numbers between %d and %d\n",num1,num2);
    for(i=min;i<=max;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
        else{
            flag=0;
        }
    }
    return 0;
}