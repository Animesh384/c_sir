#include<stdio.h>
#include<limits.h>

int main(){
 int a[3][3]={{-1111,2,3},{4,-10,6},{7,-8,-9}};
 int max=INT_MIN;

 for(int i=0;i<3;i++){
  if(max<a[i][i]) max=a[i][i];
 
}
printf("\n%d\n",max);

}
