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
    int x,y;
    printf("enteer a two number x,y:");
    scanf("%d,%d",&x,&y);
    int z=gcd(x,y);
    printf("gcd of two %d,%d number:",x,y);
    printf("%d",z);


}