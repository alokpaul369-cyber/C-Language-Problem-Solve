#include<stdio.h>
int main()
{
    int a,b,sum;
    int *p1,*p2;
    scanf("%d",&a);
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    printf("%d",sum);
    return 0;
}


