#include<stdio.h>
int main()
{
   int sum=0,n;
   printf("Enter a number:");
   scanf("%d",&n);
   for (int i=1;i<=n;i++)
   {
       printf("%d ",2*i);
       sum=sum+(2*i);
   }
   printf("\n%d",sum);
    return 0;
}
