#include<stdio.h>
//do while
int main(){
    int a=0,i=1;
    do{
        a+=i;
        i++;
    }
    while(i<10);
    printf("sum =%d\n",a);
}
