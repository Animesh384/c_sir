#include<stdio.h>

int main(){
    int n;
    float sum=1;
    printf("enter a number:");
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        sum=sum*i;
        printf("%d!/",i);
        i++;
        sum=sum/(sum*i);
        printf("%d!+",i);
        i++;

    }
    printf("\b=%.5f",sum);
    return(0);

}
