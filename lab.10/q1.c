//print the partern
/*
    $        $
   $$$      $$$
  $$$$$    $$$$$
 $$$$$$$ $$$$$$$$

      " "  $  " "   " "  $  
 i=0   4   1   4     4   1
 i=1   3   3   3     3   3
 i=2   2   5   2     2   5
 i=3   1   7   1     1   7
 i=4   0   9   0     0   9
 (2*i+1)
 (n-1)-i 
*/
#include<stdio.h>
int main(){
    int m;
    printf("enter a number:");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        for(int j=0;j<(m-1-i);j++)
            printf(" ");
        for(int j=0;j<(i*2+1);j++)
        printf("$");
        for(int j=0;j<(m-1-i);j++)
            printf(" ");
        for(int j=0;j<(m-1-i);j++)
            printf(" ");
        for(int j=0;j<(i*2+1);j++)
        printf("$");

        printf("\n");
        
            }
        
    

}
