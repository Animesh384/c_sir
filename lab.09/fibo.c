#include<stdio.h>
int main(){
    int n;
    printf("enter a N for fibonacci series:");
    scanf("%d",&n);
    int a,b=0,c=1;
    printf("%d",c);
    for(int i=0;i<n;i++){
    a=b+c;
    printf(",%d",a);
    b=c;
    c=a;
    }
printf("\n");
}
