#include<stdio.h>
int main()
{
    int n,org,rem,rev=0;
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n/=10;
    }
    if (rev==org)printf("The number is palindrome.");
    else printf("The number is not palindrome.");
    return 0;
}
