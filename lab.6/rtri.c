#include<stdio.h>
int main(){
    int i,j,k,t;
    //5,7,14    7,9,12
    printf("enter a value:");

    scanf("%d,%d,%d",&i,&j,&k);
    printf("\ninput values:%d,%d,%d\n",i,j,k);
    t=(i*i==j*j+k*k)||(j*j==i*i+k*k)||(k*k==j*j+i*i);
    printf("\nis this is a triangle:%d\n",t);
    //sum of sides in triangle

    printf("sum of sides:%d\n",t);
    
    //m1*m2*-1=1

    


 
    return 0;


}