#include<stdio.h>
int main()
{
   int arr2[100],a=0,b=0;
   printf("Enter the element for the arr:\n");
   for (int i=0;i<=7;i++)
   {
       scanf("%d",&arr2[i]);
   }
   for (int i=0;i<=7;i++)
   {
       if (i%2==0) a+=arr2[i];
       else b+=arr2[i];
   }
   printf("Even sum=%d and odd sum=%d",a,b);
    return 0;
}

