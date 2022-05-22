#include<stdio.h>

int largenum(int* a,int n){

    int l=*a;
    for(int i=1;i<n;i++){
        if(l<*(a+i))
        l=*(a+i);
    }
    return l;
    
}
int main(){
int a[20];
for (int i=0;i<20;i++){
    a[i]=(i+1)*3;
}

printf("largest=%d",largenum(a,20));

}

/**
 &arr is address  of whole array

 &a int (*)[20]
 */