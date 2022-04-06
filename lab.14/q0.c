#include<stdio.h>


int main(){
    int a[20];
    for(int i=0;i<10;i++){
        printf("enter a number:");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        printf("\nnumber:%d",*(a+i));

    }



}
