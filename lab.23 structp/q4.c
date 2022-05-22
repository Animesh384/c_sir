#include<stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    };
    struct book *ptr,b[5];
    int i,n=0;
    printf("Enter the numbers of the books: ");
    scanf("%d",&n);
    ptr=b;
    for(i=0;i<n;i++)
    {
    printf("\n Enter the next book name, price and pages: ");
    scanf("%s%f%d",(ptr+i)->name,&(ptr+i)->price,&(ptr+i)->pages);
    }
    for(i=0;i<n;i++)
    {
    printf("%s %f %d\n",(ptr+i)->name,(ptr+i)->price,(ptr+i)->pages);
    }

    return 0;
}