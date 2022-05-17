#include<stdio.h>
#include<stdlib.h>

struct emp
{
 char friend[100];
 char iteam[100];
 float itemcost;
};


int main(){
int n;
printf("enter a number of item:");
scanf("%d",&n);
struct emp* p1=(struct emp*)malloc(n*sizeof(struct emp));
struct emp* temp;
int sum=0;
for (int i=0;i<n;i++){
temp=p1+i;

scanf(" %[^\n]s",&temp->iteam);
printf("%s",temp->iteam);

scanf("%f",&temp->itemcost);
printf("%f",temp->itemcost);

sum=sum+temp->itemcost;

}
printf("\nenter number of friends");
int stu;
scanf("%d",&stu);
printf("\neach student have to pay %.2f",sum/stu);


}
