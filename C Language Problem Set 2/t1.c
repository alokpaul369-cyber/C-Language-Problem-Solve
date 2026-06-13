#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter number range=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\n sum of n natural number=%d",sum);
    return 0;
}
