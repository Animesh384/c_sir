#include<stdio.h>

int main(){
    int a;
    printf("Enter a  acceleration:");
    scanf("%d",&a);
    if(a==0) printf("body is not accelerating");
    else if(a>0) printf("body is accelerating");
    else printf("body is deaccelerating");

} 