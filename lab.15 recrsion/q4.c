#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
    int arr[5][5];
     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        printf("enter a number %d,%d:",i,j);
        scanf("%d",&arr[i][j]);
        //arr[i][j]=i*j;
        //printf("%d\n",i*j);
    }}
    int c;
    bool b=true;
    printf("\n");
 for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(!(arr[i][j]==arr[j][i])){
            b=false;
             break;
            }


    }
 }
 if(b) printf("true");
 else printf("false");
}