#include<stdio.h>
#include<math.h>
int main(){
int d,y,w,r_d;
printf("Enter Days:");
scanf("%d",&d);
y=d/365;
r_d=d%365;
w=r_d/7;
r_d=r_d%7;
printf("%d Years %d Weeks %d Days",y, w, r_d);

return 0;
}
