#include<stdio.h>
int fact(int x)
{
    if (x==1 || x==0)
        return 1;
    else
        return x*fact(x-1);
}
int main()
{
    int n;
    printf("Enter a number to get factorial=");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Factorial of negative number is not defined.\n");
    }
    else
    {
        printf("Factorial of %d = %d",n,fact(n));
    }
    return 0;
}
