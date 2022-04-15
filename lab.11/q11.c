//5. WAP to find out the sum of digits of a number n by suing function.
#include<stdio.h>
void sumn(int n){
    int sum=0;
    for(int i=0;i<n;i++) sum=sum+1;
    printf("sum=%d",sum);
    }
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    sumn(n);
}