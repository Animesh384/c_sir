#include<stdio.h>
//macro
#define inc(a) a+1
#define c 3.14

int main(){
    printf("value of c:%f\n",c);
    float r;
    printf("enter:");
    scanf("%f",&r);
    printf("area of circle:%f\n",r*r*c);
    printf("print:%d",inc(2)+inc(2));
}