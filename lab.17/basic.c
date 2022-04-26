#include<stdio.h>
int main(){
    int* a;
    int b=10;
    a=&b;
    printf("&a=%u\n",&a);
    printf("a=%u\n",a);
    printf("*a=%d\n",*a);
    printf("b=%d\n",b);
    printf("&b=%u\n",&b);

}