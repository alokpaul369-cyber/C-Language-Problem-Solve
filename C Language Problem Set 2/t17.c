#include<stdio.h>
int sqr(int x)
{
    int s=x*x;
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sqr(n));
    return 0;
}
