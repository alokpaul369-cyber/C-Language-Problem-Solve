#include<stdio.h>
int main()
{
    int count=0;
    char str[200];
    printf("Enter a string:");
    gets(str);
    while (str[count]!='\0')
    {
        count++;
    }
    printf("The length of the string is:%d",count);
    return 0;
}
