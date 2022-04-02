#include<stdio.h>

int main(){
    int n;
    float sum=1;
    printf("enter a number:");
    scanf("%d",&n);
    printf("1");
    int i=2;
    while(i<=n){
        sum=sum*i;
        printf("*%d",i);
        i++;

    }
    printf("=%.f",sum);
    return(0);

}
