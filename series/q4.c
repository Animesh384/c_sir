#include<stdio.h>

int main(){
    int n;
    float sum=0,s=1;
    printf("enter a number:");
    scanf("%d",&n);
    int i=2;
    while(i<=n){
        s=s*i;
        sum=sum+1/(s*i);
        //printf(i==n?"1/%.f":"1/%.f+",s);
        printf("1/%d!+", i);
        i++;
    }
    printf("\b=%f\n",sum);
    return(0);

}
