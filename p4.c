#include<stdio.h>
#include<math.h>

int main(){
    int sum=0;
    float avg;
    for (int i=1;i<=100;i++)
    {
        printf(" %d", i);
        sum=sum+i;
    }
    avg=sum/100.0;
    printf("\n sum:%d \n",sum);
    printf("avg:%f",avg);
    return 0;
}

