#include<stdio.h>
struct Book
{
    char title[2000];
    char author[2000];
    float price;
};
int main()
{
    struct Book b[20];
    int n,minindex=0,i;
    printf("Enter the number of the book:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\nEnter data for book%d\n",i+1);
        printf("Title:");
        scanf(" %[^\n]",b[i].title);
        printf("Author:");
        scanf(" %[^\n]",b[i].author);
        printf("Price:");
        scanf("%f",&b[i].price);
    }
    for (i=1;i<n;i++)
    {
        if (b[i].price<b[minindex].price)
        {
            minindex=i;
        }
    }
    printf("\nLowest price book details:");
    printf("Title:%s\n",b[minindex].title);
    printf("Author:%s\n",b[minindex].author);
    printf("Price:%.2f\n",b[minindex].price);
    return 0;
}
