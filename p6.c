#include<stdio.h>
int main()
{
    int multi=1,n;
    scanf("%d",&n);
    for (int i=1; i<=n; i++)
    {
        multi=n*i;
        printf("%d * %d = %d\n",n,i,multi);
    }
    return 0;
}

