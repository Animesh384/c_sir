#include<stdio.h>

int main(){
    int a=10;
    int b=20;
    int *p=&a;
    int *q=&b;
    *p=*p+*q;
    printf("location:%u   value:%d\n",p,*p);
    printf("location of a:%u value of a:%d",&a,a);


}