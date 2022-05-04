#include<stdio.h>

int main(){
    char *p[5];
    char a[]="Animesh",b[]="utkarsh",c[]="yash",d[]="tarunjit",e[]="srinivas";
    p[0]=a,p[1]=b,p[2]=c,p[3]=d,p[4]=e;
    for(int i=0;i<5;i++){
        printf("\n%s",p[i]);//(p+1)
    }


}
