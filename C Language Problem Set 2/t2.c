#include<stdio.h>
int main()
{
    float n,sum=0;
    float avg;
    printf("Enter number range=");
    scanf("%f",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    avg=sum/n;
    printf("Sum of n natural number=%f\n",sum);
    printf("avarage of n natural number=%.3f",avg);
    return 0;
}

