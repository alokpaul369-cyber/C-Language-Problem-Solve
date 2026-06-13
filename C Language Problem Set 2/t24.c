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
    printf("The individual reverse of the string:\n");
    for(int i=count; i>=0; i--)
    {
        printf("%c\n",str[i]);
    }
    return 0;
}

