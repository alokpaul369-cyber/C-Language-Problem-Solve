#include<stdio.h>
int main()
{
    typedef struct book
    {
        int page;
        float price;
        char name[20];

    } book;
    book b1;
    printf("Enter the price of book:");
    scanf("%f",&b1.price);
    printf("Enter the page number of the book:");
    scanf("%d",&b1.page);
    printf("The name of the book:");
    scanf("%[^\n]s",b1.name);
    printf("%d",b1.page);
    return 0;
}
