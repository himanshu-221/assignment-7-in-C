// Write a program to print all Armstrong numbers under 1000.

#include<stdio.h>
int main()
{
    int i,j,rem,arm;
    printf("Armstrong Numbers are \n");
    for(i=1;i<=1000;i++)
    {
        arm=0;
        j=i;
        while(j!=0)
        {
            rem=j%10;
            arm+=rem*rem*rem;
            j=j/10;
        }
        if(arm==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}