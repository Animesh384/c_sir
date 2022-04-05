//find out gcd of 3 number   math.gcd(math.gcd(n1,n2),n3))
#include<stdio.h>
int gcd(int n,int m)
{
//n1<n2
if(n%m==0)
return(m);

return(gcd(m,n%m));

}
int main(){
    int x,y,z,r;
    printf("enter a 3 number:");
    scanf("%d,%d,%d",&x,&y,&z);
    printf("gcd of three number:");
    //n1<2<n3
    
    r=gcd(x,y);
    r=gcd(r,z);

    
    printf("%d",x);

}