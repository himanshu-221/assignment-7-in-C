//   Write a program to find the position of first 1 in LSB.

#include<stdio.h>
int main()
{
    int num,count=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    
    while(num!=0)
    {
        count++;
        if(num&1==1)
        {
           break;
        }
            num=num>>1;
    }
    printf("Position of first 1 in LSB is %d",count);
    // if(count!=0)
    //     printf("Position of first 1 in LSB is %d",count);
    // else{
    // printf("LSB is not set");
    // }
    return 0;
}