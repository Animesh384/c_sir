#include<stdio.h>
 int main(){
     float p,r,q,s;
     printf("emter registances for whietstone bridge p,r,q,s :");
     scanf("%f,%f,%f,%f",&p,&r,&q,&s);

     if(p*s==q*r)
     printf("whietstone is balance\n");
     else{
         s=q*r/p;
         printf("s=%f for balance whietstone bridge\n",s);
     }

     return 0;
 }