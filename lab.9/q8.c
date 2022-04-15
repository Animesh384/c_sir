//sum eg: 47 4+7=11
#include<stdio.h>
int main(){
    int n,s=0;
    printf("Enter a number:");
    scanf("%d",&n);
    do{
        s+=n%10;
    }
    while(n/=10);
    printf("%d\n",s);
}
