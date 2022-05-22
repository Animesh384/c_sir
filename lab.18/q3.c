#include<stdio.h>

int suml(int* a,int* b,int n){
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
        s1+=*(a+i);
        s2+=*(b+i);
    }
    if(s1==s2)
    return 0;
    else if(s1>s2)
    return 1;
    else
    return 2;
}
int main(){
int a[20],b[20],g;
for (int i=0;i<20;i++){
    a[i]=(i+1)*3;
    b[i]=(i+1)*3;
}
g=suml(a,b,20);

if(!g)
printf("s1=s2 equal");
else if(g==1)
printf("s1 is greater than s2");
else if(g==2)
printf("s1 is less than s2");

}

/**
 &arr is address  of whole array
 */