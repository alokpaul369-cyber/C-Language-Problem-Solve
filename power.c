#include<stdio.h>

int main(){

int a;
printf("enter a base number:");
scanf("%d",&a);
int b;
printf("enter a power number:");
scanf("%d",&b);
int sum=1;
for(int i=1;i<=b;i++){

    sum=a*a;

}

printf("%d",sum);
return 0;
}
