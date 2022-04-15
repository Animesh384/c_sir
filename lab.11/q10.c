/*4. WAP to add two numbers entered through keyboard by using a suitable user defined function
( say SUM) for addition operation.*/
#include<stdio.h>
int sum(int x,int y){return(x+y);}
int main(){
    int x,y;
    printf("enter a two number x,y:");
    scanf("%d,%d",&x,&y);
    printf("sum=%d",sum(x,y));
}