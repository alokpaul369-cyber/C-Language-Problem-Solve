#include<stdio.h>
#include<math.h>
main(){
printf("Enter a character:");
char n;
scanf("%c",&n);
if (n>='0' && n<='9'){
    printf("'%c'it is a digit.\n",n);
}else{
printf("'%c'it is not a digit.\n",n);
}
}
