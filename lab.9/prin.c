#include<stdio.h>
int main(){
    int flag=1,num,k=2;
    printf("enter a number:");
    for(scanf("%d",&num);k<=num/2;k++){

       if(num%k==0){
           flag=0;
           break;


       }

    }

if(flag) printf("prim number\n");
else printf("not a prim number\n");


}
