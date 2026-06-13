#include<stdio.h>
int main()
{
    int arr[20],sum=0;

    for (int i=0;i<20;i++)
    {
      scanf("%d",&arr[i]);
      sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}

