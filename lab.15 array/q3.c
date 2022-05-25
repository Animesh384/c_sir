#include<stdio.h>
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
    printf("\n");
 for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            c=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=c;


    }
}
     for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        printf("[%d]",arr[i][j]);
        //scanf("%d",&arr[i][j]);
        //arr[i][j]=i*J;
    }
    printf("\n");
    }

}