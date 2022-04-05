//find out gcd of 3 number   math.gcd(math.gcd(n1,n2),n3))
#include<stdio.h>
int gcd(int n,int m)
{
//n1>=n2
if(n%m==0)
return(m);

return(gcd(m,n%m));

}
int main(){
    int x=gcd(gcd(10,10),10);
    printf("%d",x);



}