#include<stdio.h>
int main()
{
    int n,arr[100],count=0;
    printf("Enter number for compare:");
    scanf("%d",&n);
    printf("Enter eliment for array:");
    for (int i=0;i<=7;i++)
    {
       scanf("%d",&arr);
    }
    for (int i=0;i<=7;i++)
    {
        for (int j=i+1;j<=7;j++)
        {
            if (arr[i]+arr[j]==n)
               {
                  count++;
                  printf("(%d,%d)\n",arr[i],arr[j]);
               }
        }
    }
    printf("count=%d",count);

    return 0;
}

