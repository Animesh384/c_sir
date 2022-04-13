#include<stdio.h>

int main(){
 int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 int max=0;

 for(int i=0;i<3;i++){
  if(max<a[i][i]) max=a[i][i];
 
}
printf("\n%d\n",max);

}
