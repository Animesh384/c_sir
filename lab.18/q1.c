#include<stdio.h>

int main(){
    int i,*ptr,sum=0,arr[5]={1,2,3,4,5};
    for(i=0,i<5,i++){
        sum=sum+*(ptr+i);
        //ptr is address variable
        
    }

}





/**
 how can we access pointer variable and []
 *(b+2)==
 a constant can replace by a variable but reverse is not possible

 &a is address <--constant-->
 const a=3;
 int* b=&a;
 b is address variable
 a[0] can be replace by b[0]
 a is const              b is variable



 */
