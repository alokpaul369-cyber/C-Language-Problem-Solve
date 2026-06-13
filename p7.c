#include<stdio.h>
int main()
{
    int multi=1,n;
    scanf("%d",&n);
    for (int i=1; i<=10; i++)
    {
        for (int j=1;j<=n;j++)
        {
          multi=j*i;
          printf("%d * %d= %d\n",j,i,multi);
        }
    }
    return 0;
}

