#include<stdio.h>
#include<math.h>
int main()
{
    float d,f,m;
    printf("Enter the travelled distance:");
    scanf("%f",&d);
    printf("Enter the consumed fuel:");
    scanf("%f",&f);
    m=d/f;
    printf("Milage of the car:%f",m);
    printf(" kmpl");
    return 0;
}
