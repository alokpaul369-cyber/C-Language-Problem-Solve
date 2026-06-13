#include<stdio.h>
int main()
{
    int arr[200],n;
    int *ptr;
    printf("Enter the limit of number:");
    scanf("%d",&n);
    printf("Enter number to the array:\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Printing the element of array using the pointer:\n");
    for (int j=0;j<n;j++)
    {
        ptr=&arr[j];
        printf("%d\n",*ptr);
    }
    return 0;
}
