#include<stdio.h>
int main(){

    int arr[4][5];
    int arr1[4][5];


    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
        printf("enter a number %d,%d",i,j);
        //scanf("%d",&arr[i][j]);
        arr[i][j]=i*j;
        printf("%d",i*j);
    }}
    printf("\n");
 for(int i=3;i>=0;i--){
        for(int j=4;j>=0;j--){
        printf("[%d]",arr[i][j]);
        //scanf("%d",& arr[i][j]);
        //arr[i][j]=i*J;
    }
    printf("\n");
    }



}
