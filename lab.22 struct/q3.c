#include<stdio.h>
#include<stdlib.h>

struct dis
{
int dis1;
int dis2;

};


int main(){
struct dis* p1=(struct dis*)malloc(sizeof(struct dis));
int sumd=0;

scanf("%d",&p1->dis1);
printf("\n%d",p1->dis1);

scanf("%d",&p1->dis2);
printf("\n%d",p1->dis2);
sumd=p1->dis1+p1->dis2;

printf("\n sum of distance=%d",sumd);



}
