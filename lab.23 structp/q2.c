#include<stdio.h>
#include<stdlib.h>

struct book{
    char name[20];
    float price;
    int page;
};

int main(){
    struct book b1={"book",20.45,345};
    struct book* b;
    b=&b1;
    printf("\nname:%s",b->name);
    printf("\nprice:%.2f",b->price);
    printf("\npage:%d",b->page);

}