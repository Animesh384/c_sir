#include<stdio.h>

int main(){
    int a,b,c,flag=1;
istriangle:
    
    printf("Enter sides of triangle a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c); 
    if(a+b>c&&a+c>b&&b+c>a) printf("is triangle\n");
    else printf("triangle is not posible\n");
    printf("flag:");
    scanf("%d",&flag);
    if(flag==1) goto istriangle;



}
