#include<stdio.h>
int main(){

    int arr[4][5];



    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
        printf("enter a number %d,%d:",i,j);
        //scanf("%d",&arr[i][j]);
        arr[i][j]=i*j;
        printf("%d\n",i*j);
    }}
    printf("\n");
    int k;
    printf("enter a constant:");
    scanf("%d",&k);

 for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
        //printf("[%d]",arr[i][j]);
        //scanf("%d",&arr[i][j]);
        //arr[i][j]=i*J;
        arr[i][j]=k*arr[i][j];
    }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
        printf("[%d]",arr[i][j]);

        }
        printf("\n");

}
}