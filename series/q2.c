#include<stdio.h>

int main(){
    int n;
    float sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=3;i<=n;i+=4){
        sum=sum+(i-2.0)/i;

    }
    printf("series sum 1/3 + 5/7 + 9/11 ....=%f",sum);
    return(0);

}
