// Write a program to calculate HCF of two numbers.

#include<stdio.h>
int main()
{
    int num1,num2,min=0,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    min=num1<num2?num1:num2;
   
   while(min!=1)
   {
    if(num1%min==0 && num2%min==0)
        {
            break;
        }
        min--;
   }
    printf("HCF is %d",min);
    return 0;
}