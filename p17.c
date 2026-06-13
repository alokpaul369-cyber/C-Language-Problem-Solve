#include<stdio.h>
int main()
{
    int n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    s=n-1;
    for (int i=1;i<=n;i++)
    {
        for (int k=s;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf(" %d",i);
        }
        printf("\n");
    }
    return 0;
}
