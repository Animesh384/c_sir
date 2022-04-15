#include<stdio.h>

int main(){
    int x,y,x1,y1,x2,y2;
    printf("Enter a cordinet of triangke (x,y),(x1,y1),(x2,y2):");
    scanf("(%d,%d),(%d,%d),(%d,%d)",&x,&y,&x1,&y1,&x2,&y2);
    float m1,m2,m3;
    m1=(y1-y)/(x1-x);
    m2=(y2-y1)/(x2-x1);
    m3=(y-y2)/(x-x2);
     if(m1==m2||m1==m3||m2==m3){
         printf("formation of triange is not possible ");

     }  
     else
     printf("formation of triange is  possible");

    return(0);
}