#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter a values of a,b,c,d,e:");
    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
    int max;
    max=a;
    if(max<b)
    max=b;
    if(max<c)
    max=c;
    if(max<d)
    max=d;
    if(max<e)
    max=e;
    printf("\nlargest value is %d",max);
    return(0);
}