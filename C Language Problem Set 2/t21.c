#include<stdio.h>
int arms(int x)
{
    int digit=0,sum=0,remainder,original=x;
    while (original!=0)
    {
        digit++;
        original/=10;
    }
    original=x;
    while (original!=0)
    {
        remainder=original%10;
        sum+=pow(remainder,digit);
        original/=10;
    }
    return(sum==x);
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (arms(n))
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
    return 0;
}
