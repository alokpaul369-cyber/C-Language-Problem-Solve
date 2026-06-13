#include<stdio.h>
int main()
{
    int count=0,count2=0,i=0;
    char ar[200];
     gets(ar);
    while (ar[i]!='\0')
    {
        //char ch=ar[i];
        if ((ar[i]>='A' && ar[i]<='Z') || (ar[i]>='a' && ar[i]<='z'))
        {
        if (ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u'|| ar[i]=='A' || ar[i]=='E' || ar[i]=='I' || ar[i]=='O' || ar[i]=='U')
        {
            count++;
        }
        else count2++;
        }
        i++;
    }
    printf("number vowels %d and number of consonant %d.",count,count2);
    return 0;
}


