/*
     1
    222
   33333
  4444444





*/

#include<stdio.h>
int main(){
     int m;
    printf("Enter a Number :");
    scanf("%d",&m);
     for(int i=0;i<m;i++){
        for(int j=0;j<(m-1-i);j++)
            printf(" ");
        for(int j=0;j<(i*2+1);j++)
        printf("%d",i+1);
        for(int j=0;j<(m-1-i);j++)
            printf(" ");
        for(int j=0;j<(m-1-i);j++)
            printf(" ");
        for(int j=0;j<(i*2+1);j++)
        printf("%d",i+1);

        printf("\n");
        
            }
     
    for(int j=m-1;j>=1;j--){
        for(int i=(m-j);i>=1;i--)
        printf(" ");
        for(int i=(j*2-1);i>=1;i--)
        printf("%d",j);
        for(int i=(m-j);i>=1;i--)
        printf(" ");
        for(int i=(m-j);i>=1;i--)
        printf(" ");
        for(int i=(j*2-1);i>=1;i--)
        printf("%d",j);  
        printf("\n");      
    }
}        