#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a,b;
    printf("Enter a number X=");
    scanf("%d",&a);
    printf("Enter a number Y=");
    scanf("%d",&b);
    printf("Before swapping X=%d and Y=%d\n",a,b);
    swap(&a,&b);
    printf("Number after swapping X=%d And Y=%d",a,b);
    return 0;
}
