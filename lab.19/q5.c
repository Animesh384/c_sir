#include<stdio.h>
void fun(int (*p)[5],int *p1){
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<5;j++)
        {
           //printf("\n%d",p[i][j]);
           p1[i]+=p[i][j];

        }
        
    }
    for (int i=0;i<4;i++)
    {
       printf("\n%d",p1[i]);
    }

}

int main(){
    int a[4][5];
    int b[4]={0,0,0,0};
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<5;j++)
        {
            a[i][j]=i+1;
        }
        
    }
    //int (*p)[5];
    //int *p1;
    //p=a;
    //p1=b;
    fun(a,b);
    
    
    

    

}