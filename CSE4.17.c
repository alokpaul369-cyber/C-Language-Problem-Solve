#include<stdio.h>
#include<math.h>
main(){
int num,shift;
printf("Enter an integer:");
scanf("%d",&num);
shift=num<<2;
printf("Orginal number:%d\n",num);
printf("After left shifting by 2 bits:%d\n",shift);
}
