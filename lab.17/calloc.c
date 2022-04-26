#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",n);
    int *ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
       // *(ptr+i)=i;
        ptr[i]=2;

    }
    for(int i=0;i<n;i++){
        printf("%u  :%d",&ptr[i],ptr[i]);
        
    }
}