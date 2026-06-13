//print the smallest number of two.
#include<stdio.h>
#include<math.h>
main(){
int a,b;
printf("Enter a number:");
scanf("%d",&a);
printf("Enter a number:");
scanf("%d",&b);
if (a<b){
    printf("The smallest number is:%d",a);
}else if (b<a){
    printf("The smallest number is:%d",b);
}
}
