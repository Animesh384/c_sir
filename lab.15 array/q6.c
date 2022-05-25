#include<stdio.h>

int main(){
    int arr[4][4];
    int arr1[4][4];


    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=3+2*i;
            arr1[i][j]=2+4*j;       }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j]=arr[i][j]+arr1[i][j];
            printf("[%d]",arr[i][j]);
          }
          printf("\n");
    }


    }