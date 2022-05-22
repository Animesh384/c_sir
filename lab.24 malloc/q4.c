#include<stdio.h>
#include<stdlib.h>
int main(){
    //n row ,m colum
    int **ptr;
    int n,m;
    printf("^_^\n");
    printf(". .\n");
    printf(". .\n");
    scanf("%d",&n);
    scanf("%d",&m);
    ptr=(int**)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        *(ptr+i)=(int*)malloc(m*sizeof(int)); //p[i]=.......
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        *(*(ptr+i)+j)=i*j;
        printf("%d ",ptr[i][j]);
    }
    printf("\n");
    }
}