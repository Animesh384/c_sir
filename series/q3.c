#include<stdio.h>

int main(){
    int n;
    float sum=1;
    printf("enter a number:");
    scanf("%d",&n);
    printf("1");
    for(int i=2;i<=n;i++){
        sum=sum*i;
        printf("*%d",i);

    }
    printf("=%.f",sum);
    return(0);

}
