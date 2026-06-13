#include<stdio.h>
int main()
{
    int n,r,rev=0;
    scanf("%d",&n);
    if(n==1 || n==0)
    {
        printf("the number is not prime number");
    }
    else
        for(int i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
                printf("The is not prime number");
                break;
            }
            else
                printf("The number is prime number");
                break;
        }
    return 0;
}

