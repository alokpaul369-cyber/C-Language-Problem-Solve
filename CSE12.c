#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,S;
float A;
printf("Enter the value of side a:");
scanf("%d",&a);
printf("Enter the value of side b:");
scanf("%d",&b);
printf("Enter the value of side c:");
scanf("%d",&c);
S=(a+b+c)/2;
A=sqrt(S*(S-a)*(S-b)*(S-c));
printf("%f",A);
return 0;
}
