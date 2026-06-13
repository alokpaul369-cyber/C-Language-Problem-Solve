#include<stdio.h>
#include<math.h>
int main(){

    int n;
    scanf("%d",&n);
    int sum=0;
    while(n!=0){

    int x=n%10;
    sum=sum+x;
    n=n/10;


    }

printf("sum is:%d",sum);
return 0;
}
