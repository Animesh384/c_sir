/*
$
$$
$$$
$$$$
$$$$$
$$$$
$$$
$$
$
<---
$$
$$$
$$$$
$$$$$
$$$$
$$$
$$
$
<--
$
$$
$$$
$$$$
$$$$$
$$$$
$$$
$$
$

--------->m=5

      $      " "         ""     $    " "
i=0   1(i+1)  4(n-1-i)
i=1   2       3
i=2   3       2
i=3   4       1
i=4   5       0

      $       " "
i=4   4 i      1(m-i)
i=3   3        2
i=2   2        3
i=1   1        4



*/
#include<stdio.h>
int main(){
    int m;
    printf("enter a numer :");
    scanf("%d",&m);
    for(int j=0;j<m;j++){
        for(int i=0;i<(j+1);i++)
        printf("$");
        for(int i=0;i<(m-1-j);i++)
        printf(" ");
       
        for(int i=0;i<(j+1);i++)
        printf("$");
        for(int i=0;i<(m-1-j);i++)
        printf(" ");
        
         for(int i=0;i<(j+1);i++)
        printf("$");
        for(int i=0;i<(m-1-j);i++)
        printf(" ");
        
         for(int i=0;i<(j+1);i++)
        printf("$");
        printf("\n");
       

       
    }
    for(int j=m-1;j>=1;j--){
        for(int i=j;i>=1;i--)
        printf("$");
        for(int i=(m-j);i>=1;i--)
        printf(" ");
        for(int i=j;i>=1;i--)
        printf("$");
        for(int i=(m-j);i>=1;i--)
        printf(" ");
        for(int i=j;i>=1;i--)
        printf("$");
        for(int i=(m-j);i>=1;i--)
        printf(" ");
        for(int i=j;i>=1;i--)
        printf("$");
        
        printf("\n");
    }
    
}
