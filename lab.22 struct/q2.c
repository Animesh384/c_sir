#include<stdio.h>
#include<stdlib.h>

struct emp
{
 char ename[100];
 char gender[1];
 char disgnation[100];
 char department[100];
 float pay;
 
};


int main(){
//enter number of employ
int n;
printf("enter a number of employ:");
scanf("%d",&n);
struct emp* p1=(struct emp*)malloc(n*sizeof(struct emp));
struct emp* temp;
for (int i=0;i<n;i++){
temp=p1+i;
scanf(" %[^\n]s",&temp->ename);
printf("%s",temp->ename);
scanf(" %[^\n]s",&temp->gender);
printf("%s",temp->gender);
scanf(" %[^\n]s",&temp->disgnation);
printf("%s",temp->disgnation);
scanf(" %[^\n]s",&temp->department);
printf("%s",temp->department);
scanf("%f",&temp->pay);
printf("%f",temp->pay);


printf("\ngross pay=%f",temp->pay+0.25*temp->pay+0.75*temp->pay);


}

}
