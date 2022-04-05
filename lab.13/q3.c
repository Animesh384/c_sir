//fibonacci series    
#include<stdio.h>
int fibo(int n){
 // printf("%d+%d+",n-1,n-2);
  if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibo(n-1) + fibo(n-2));
   }

 // return(n==0||n==1?1:fibo(n-1)+fibo(n-2));  

}
int main(){
  int n;
    printf("enter nth number :");
    scanf("%d",&n);
    int r=fibo(n);
    printf("%d",r);
}