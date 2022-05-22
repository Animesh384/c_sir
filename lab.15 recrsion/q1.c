#include<stdio.h>

int main(){
 int arr[20];
 for(int i=0;i<20;i++){
     printf("enter a number:");
     scanf("%d",&arr[i]);


 }
 int p=0,n=0,e=0,o=0;

 for(int i=0;i<20;i++){
     if(arr[i]>0) p++;
     if(arr[i]<0) n++;
     if(arr[i]%2==0) e++;
     else o++;

 }
 printf("positive number:%d\n",p);
 printf("negative number:%d\n",n);
 printf("even:%d\n",e);
 printf("odd:%d\n",o);


//element in 2-D array stored in row measured
// int 2bytes
//6000
//6000+100*2(a[9][9])
//6000 6002 6004
//6006 6008 6010
// ... ....   ....


//6000+3*2byes *nth row +mth *columnum*2

///////////////////////////////////////////////////////

return 0;


}