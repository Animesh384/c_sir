#include<stdio.h>
#define macro 5.6

int main(){
    int i,j,k,t;
    //5,7,14    7,9,12
    printf("enter a value:");

    scanf("%d,%d,%d",&i,&j,&k);
    printf("\ninput values:%d,%d,%d\n",i,j,k);
    t=((i+j)>k)&&((i+k)>j)&&((k+j)>i);
    printf("\nis this is a triangle:%d\n",t);
    

   
    

    



    return 0;


}