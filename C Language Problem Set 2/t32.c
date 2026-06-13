#include<stdio.h>
struct Student
{
    char name[200];
    int age;
    float total_marks;
};
int main()
{
    int i,sum=0,n;
    struct Student s[2000];
    float avg;
    printf("Enter the number of the students:");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        printf("\nEnter details of student %d\n",i+1);
        printf("Name:");
        scanf(" %[^\n]",s[i].name);
        printf("Age:");
        scanf("%d",&s[i].age);
        printf("Total mark:");
        scanf("%f",&s[i].total_marks);
    }
    printf("\n-----Students Information-----\n");
    for (i=0; i<n; i++)
    {
        printf("\nStudent%d\n",i+1);
        printf("Name:%s\n",s[i].name);
        printf("Age:%d\n",s[i].age);
        printf("Total marks:%.2f\n",s[i].total_marks);
    }
    for (i=0; i<n; i++)
    {
        sum+=s[i].total_marks;
    }
    avg=sum/n;
    printf("Average of total marks:%.3f",avg);
    return 0;
}
