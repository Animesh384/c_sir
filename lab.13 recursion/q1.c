/* find the factorial to n number using recrursion



*/
 int s=1;

#include<stdio.h>
int rec(int n){
  /* s=s*n;
   printf("valude=%d\n",s);
   n--;
   if(n>0)
   rec(n);
   printf("valude=%d\n",s);
   */
  if(n==1){
    printf("1");
  return(1);
  }
  else{
  printf("%d*",n);
  return(n*rec(n-1));  
   }

}

int main(){
    int f,s=1;
    printf("enter a number:");
    scanf("%d",&f);
    int r=rec(f);
    printf("=%d\n",r);
}