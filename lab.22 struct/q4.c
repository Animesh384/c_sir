#include<stdio.h>
#include<stdlib.h>

struct node{
    int acc;
    char title[100];
    char author[100];
    float price;
    struct node* link;
};

struct node* addbook(struct node* head){
    if(head==NULL){
        printf("enter a acc:");
        scanf("%d",&head->acc);
        printf("enter a title:");
        scanf(" %[^\n]s",&head->title);
        printf("enter a author:");
        scanf(" %[^\n]s",&head->title);
        printf("price:");
        scanf("%f",&head->price);
        head->link=NULL;
        return head;
    }
    else{
    struct node* new=(struct node*)malloc(sizeof(struct node));
    printf("enter a acc:");
    scanf("%d",&new->acc);
    printf("enter a title:");
    scanf(" %[^\n]s",&new->title);
    printf("enter a author:");
    scanf(" %[^\n]s",&new->title);
    printf("price:");
    scanf("%f",&new->price);
    head->link=new;
    new->link=NULL;
    return new;
    }

}
int getdata(struct node* head){
    count=0;
    while(head!=NULL){
        printf("enter a acc:%d",head->acc);
        printf("enter a title:%s",head->title);
        printf("enter a author:%s",head->author);
        printf("price:%f",head->price);
        head=head->link;
        count++;
    }
    return count;

}

int main(){
struct node* temp;
struct node* head=(struct node*)malloc(sizeof(struct node));
head=NULL;

/* printf("enter a acc:");
scanf("%d",&head->acc);
printf("enter a title:");
scanf(" %[^\n]s",&head->title);
printf("enter a author:");
scanf(" %[^\n]s",&head->title);
printf("price:");
scanf("%f",&head->price);
head->link=NULL; */
while(exit != 1)
    {
    printf("1.ADD BOOK INFORMATION\n2.DISPLAY BOOK INFORMATION\n3.LIST ALL BOOKS OF THE GIVEN AUTHOR\n4.LIST THE TITLE OF SPECIFIED BOOK\n5.LIST THE COUNT OF THE BOOK IN LIBRARY\n6.LIST THE BOOKS IN THE ORDER OF ACCESSION NUMBER\n7.EXIT()\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            if(head==NULL){
                temp=addbook(head);
            }
            else{
                temp=addbook(temp);
            }
        break;
        case 2:
           
        break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
           
            break;
        case 6:
        
            break;
        case 7: 
             exit=1;
            break;
        default:
            
            break;
        }
    }
    return 0;
}

