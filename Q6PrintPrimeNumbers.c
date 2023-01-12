// Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,j,temp=0;
    printf("Prime numbers under 100\n");
    for(i=1;i<=100;i++)
    {
        
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                temp++;
            }
        }
        if(temp==0)
        {
            printf("%d ",i);
        }
        else{
            temp=0;
        }
    }
    return 0;
}