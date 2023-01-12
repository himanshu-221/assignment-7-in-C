// Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    
    int n1,n2,i,min=0,flag=1;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    min=n1<n2?n1:n2;
    for(i=2;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            flag++;
            break;
        }
    }
    if(flag==2)
    {
        printf("%d And %d are not co-prime",n1,n2);
    }
    else{
        printf("%d and %d are co-prime numbers",n1,n2);
    }
    return 0;
}