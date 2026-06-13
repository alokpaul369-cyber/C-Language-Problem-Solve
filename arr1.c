#include<stdio.h>
int main()
{
    int n,count=0,arr1[100];
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter element for array:");
    for(int i=0;i<=7;i++)
    {
        scanf("%d",&arr1[i]);

    }
    for (int i=0;i<=7;i++)
    {
        if(arr1[i]>n)
            count++;
    }
    printf("Count=%d",count);
    return 0;
}
