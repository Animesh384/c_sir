/*

AAAAA
AAAA
AA
A
<---
AAAAA
AAAA
AAA
AA
A
<---
AAAAA
AAAA
AAA
AA
A

----------------->m=5

          A        " "
i=0       4 m       0
i=1       3         1
i=2       2         2
i=3       1         3
i=4       0         4




*/


#include<stdio.h>
int main(){
    int m;
    printf("enter a numer :");
    scanf("%d",&m);
    for(int j=0;j<m;j++){
        for(int i=0;i<(m-j);i++)
        printf("A");
        for(int i=0;i<j;i++)
        printf(" ");
        for(int i=0;i<(m-j);i++)
        printf("A");
        for(int i=0;i<j;i++)
        printf(" ");
        for(int i=0;i<(m-j);i++)
        printf("A");
        printf("\n");
    }
}
