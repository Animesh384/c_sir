//fibonacci series    
#include<stdio.h>
int fibo(int n){
  return(n==1||n==2?1:fibo(n-1)+fibo(n-2));  

}
int main(){
    int r=fibo(7);
    printf("%d",r);
}