#include<stdio.h>
int main(){
int flag=1;
for(int i=1;i<=100;i++){  for(int k=2;k<i/2;k++){ if(i%k==0) { flag=0;break; }}
if(flag) printf("%d is a prim number\n",i);
flag=1;
}}
