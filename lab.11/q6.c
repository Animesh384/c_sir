#include<stdio.h>
void display2(int n,char ch){
    for(int i=0;i<n;i++) printf("%c\n",ch);
}
int main(){
  display2(10,'a');
}