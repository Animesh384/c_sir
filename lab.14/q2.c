//search and display position 
#include<stdio.h>

int main(){
    int a[20],s,po=-1;
    for(int i=0;i<20;i++){
        printf("enter a number:");
        scanf("%d",&a[i]); //scanf("%d",(a+i)'
        
    }
    printf("enter a number to be search:");
    scanf("%d",&s);
    int j;
    for(j=19;j>=0;j--){
    if(s==a[j]){

        po=j;
        //printf("position:%d",po);
        break;
    }
    


    }
    if(po>=0)
    printf("position:%d",po+1);
    else
    printf("not found");
    
}
