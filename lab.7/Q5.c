#include<stdio.h>
int main(){
    float bs,hra,da;
    printf("Enter a bass salaray:");
    scanf("%f",&bs);
     if(bs<1500){
         hra=bs*10/100;
         da=bs*40/100;
     }
     else{
         hra=500;
         da=bs*50/100;

     }
     printf("gros salaray:%f",bs+hra+da);
}