#include<stdio.h>

int main(){
    int n;
    float sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int i=3;
    while(i<=n){
        sum=sum+(i-2.0)/i;
        i+=4;
    }
    printf("series sum 1/3 + 5/7 + 9/11 ....=%f",sum);
    return(0);

}
