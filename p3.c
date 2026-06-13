#include<stdio.h>
int main(){
    int sum=0,n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf(" %d", i);
        sum=sum+i;
    }
    printf("\nThe sum of given numbers:%d",sum);
    return 0;
}
