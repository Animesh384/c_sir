//display factorial  first 8 fact0rial
#include<stdio.h>
int rec(int n){
  /* s=s*n;
   printf("valude=%d\n",s);
   n--;
   if(n>0)
   rec(n);
   printf("valude=%d\n",s);
   */
  if(n==1)
  return(1);
  else
  return(n*rec(n-1));

}

int main(){
    int k,r;
    for(int i=0;i<8;i++){
        printf("enter a number:");
        scanf("%d",&k);
        r=rec(k);
        printf("%d\n",r);

    }


}