#include<stdio.h>
int main()
{
    int a,b,sum;
    int *p1,*p2;
    scanf("%d",&a);
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    if (*p1>*p2)
    printf("%d is the maximum number.",*p1);
    else if (*p2>*p1)
    printf("%d is the maximum number.",*p2);
    return 0;
}

