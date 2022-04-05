//gcd 
#include<stdio.h>
int gcd(int n,int m)
{
//n1>=n2
if(n%m==0)
return(m);

return(gcd(m,n%m));

}
int main(){
    int x=gcd(45,4);
    printf("%d",x);


}