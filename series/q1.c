#include<stdio.h>
//hello world
int main(){
    int n;
    float sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int i=3;
    while(i<=n){
        sum=sum+1.0/i;
        i+=2;

    }
    printf("series sum 1/3 + 1/5 + 1/7 ....=%f",sum);
    return(0);

}
