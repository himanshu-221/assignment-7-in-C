//Write a program to find next Prime number of a given number.
#include<stdio.h>
int main()
{
    int num,i,j,flag=0;
    printf("Enter any prime number\n");
    scanf("%d",&num);
    for(i=num+1;i<=num*2;i++)
    {
        for( j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag++;
            }
        }
        if(flag==0)
        {
            printf("%d",i);
            break;
        }
        else{
            flag=0;
        }
    }
    return 0;
}