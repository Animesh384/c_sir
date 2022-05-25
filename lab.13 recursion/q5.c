// a power b
#include<stdio.h>

int power(int a,int n){
    
    return(n==0?1:a*power(a,n-1));

}

int main(){
    int a,b;
    printf("enter a a^b:");
    scanf("%d^%d",&a,&b);
    int x=power(a,b);
    printf("%d",x);
}