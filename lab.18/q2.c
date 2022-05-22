//call by  refernce
#include<stdio.h>
//swap
void swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}


int main(){
    int a=12,b=20;
    swap(&a,&b);
    printf("a=%d   b=%d",a,b);

}

/**
 we can pass the address for group of element preferable address of first element of group
 
 formal parameter=actual parameter;

 */