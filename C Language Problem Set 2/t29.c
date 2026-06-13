#include<stdio.h>
void swipe(int *x,int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    swipe(&a,&b);
    printf("First number=%d and Second number=%d",a,b);
    return 0;
}
