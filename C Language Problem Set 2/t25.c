#include<stdio.h>
int main()
{
    int count=0,i=0;
    char a[200];
    char b[200];
    printf("Enter first string:");
    gets(a);
    printf("Enter second string:");
    gets(b);
    while (a[i]!='\0'||b[i]!='\0')
    {
        if (a[i]!=b[i])
        {
            count=1;
        }
        i++;
    }
    if (count==0)
        printf("Both string are equal.");
    else printf("Both string are not equal.");
    return 0;
}

