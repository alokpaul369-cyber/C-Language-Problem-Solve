#include<stdio.h>
#include<math.h>
int main(){

int a,age;
float i,t;
char g;
scanf("%d %d %c",&a,&age,&g);
if(age<25){

if(g=='m'){
    if(a<=100000){
        i=7.5;
    }else if(a<=500000){
      i=6.5;
}else{
    i=10;
}
}
if(g=='f'){
    if(a<=100000){
        i=8.5;
    }else if(a<=500000){
      i=7.5;
}else{
    i=11;
}
}

 }else{

    if(g=='m'){
    if(a<=100000){
        i=6.5;
    }else if(a<=500000){
      i=5.5;
}else{
    i=9;
}
}
if(g=='f'){
    if(a<=100000){
        i=7.5;
    }else if(a<=500000){
      i=6.5;
}else{
    i=10;
}
}

 }
 t=a+a*i*3/100;
 printf("total = %f",t);
return 0; 
}

