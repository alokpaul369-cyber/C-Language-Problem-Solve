#include<stdio.h>
int prime(int x)
{
    if(x==1 || x==0)return 0;
    for (int i=2; i<=x/2; i++)
    {
        if (x%i==0)return 0;
        break;
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a number to check prime or not=");
    scanf("%d",&n);
    if(prime(n)==1)
    printf("The number is prime.");
    if(prime(n)==0)
    printf("The number is not prime.");
    return 0;
}
