#include<stdio.h>
int main()
{
    int arr[20],max=arr[0],n;
    printf("Enter the number limit:");
    scanf("%d",&n);
     for (int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     for (int i=1;i<n;i++)
     {
         if(max<arr[i])
         {
             max=arr[i];
         }
     }
     printf("%d",max);2

    return 0;
}
