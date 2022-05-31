#include<stdio.h>
#include<stdlib.h>
int primxy(int x,int y,int *arr){
  int count=0;
  int size=0;
  for(int i=x;i<=y;i++){
      count=0;
      for(int j=1;j<=i/2;j++){
          if(i%j==0){
              count++;
          }
      }
      if(count<=1){
          *arr=i;
         // printf("%d",*arr);
          arr++;
          size++;
      }
  }
  return size;
}
int main()
{
    int a[10000];
    int x=2128117%10+10;
    int y=2128117%100+20;
   int size=primxy(x,y,a);
   //printf("%d\n",size);

    for (int i = 0;i<size;i++)
    {
        printf("\n%d",a[i]);
    }
    


return 0;
}