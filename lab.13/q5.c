// a power b
#include<stdio.h>

int power(int a,int n){
    
    return(n==0?1:a*power(a,n-1));

}

int main(){
    int x=power(6,3);
    printf("%d",x);
}