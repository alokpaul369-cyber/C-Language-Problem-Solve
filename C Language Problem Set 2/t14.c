#include<stdio.h>
int main()
{
    int arr[20],min=arr[0],n;
    printf("Enter the number limit:");
    scanf("%d",&n);
     for (int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     for (int i=1;i<n;i++)
     {
         if(min>arr[i])
         {
             min=arr[i];
         }
     }
     printf("%d",min);
    return 0;
}


