#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("enter a number of element:");
    int n;
    scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL){
    printf("Dynamic allocation failed");
    exit(0);
    }
    else{
        for(int i=0;i<10;i++){
            *(ptr+i)=i;
        }
        for(int i=0;i<n;i++){
            printf("%u: %d\n",ptr+i,*(ptr+i));
        }
        free(ptr);
        if(ptr==NULL)
        printf("deallocation successfull");
        for(int i=0;i<n;i++){
            printf("%u: %d\n",ptr+i,*(ptr+i));
        }

    }
}