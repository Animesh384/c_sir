#include<stdio.h>

int main(){
    int n;
    float sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=3;i<=n;i+=2){
        sum=sum+1.0/i;

    }
    printf("series sum 1/3 + 1/5 + 1/7 ....=%f",sum);
    return(0);

}
