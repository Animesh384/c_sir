#include<stdio.h>
#include<stdlib.h>
int main(){
    //n row ,m colum
    int (*ptr)[5];
    int n;
    printf(".^_^.\n");
    printf(":   :\n");
    printf(":   :\n");
    scanf("%d",&n);
    //scanf("%d",&m);
    ptr=(int (*)[5])malloc(n*5*sizeof(int));
    for(int i=0;i<n;i++){
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=0;j<5;j++){
        *(*(ptr+i)+j)=i*j;
        printf("%d ",ptr[i][j]);
        sum=sum+ptr[i][j];
    }
    printf(" sum row=%d\n",sum);
    }
}