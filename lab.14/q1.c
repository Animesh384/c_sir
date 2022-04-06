#include<stdio.h>

/*
int main(){
    int a[10];
    printf("%p,%p\n",a+1,&a[2]);
    *(a+1)=10;
    printf("%d",*(a+1));

//average ,count , 
*/
int main(){
    int avg=0,a[10];
    int count=0;
   for(int i=0;i<20;i++){
      printf("enter a marks:");
      scanf("%d",&a[i]);
}
 for(int i=0;i<20;i++){
     avg=avg+a[i];
     if(a[i]>85) count++;
 }
 avg=avg/20;
 printf("avg=%d",avg);
 printf("number of students score grade >85:%d",count);


}
