#include<stdio.h>

int largenum(int* a,int n,int* s,int* o){

    int l=*a;
    *s=*a;
    *o=0;
    for(int i=1;i<n;i++){
        if(l<*(a+i))
        l=*(a+i);
        if(*s>*(a+i))
        *s=*(a+i);
        if(*(a+i)%2){
            *o+=1;
        }
    }
    return l;
    
}
int main(){
int a[20];
int s,o;
for (int i=0;i<20;i++){
    a[i]=i+1;
}

printf("largest=%d\n",largenum(a,20,&s,&o));
printf("smallest num=%d\n",s);
printf("number of odd=%d\n",o);


}

/**
 &arr is address  of whole array

 &a int (*)[20]
 */