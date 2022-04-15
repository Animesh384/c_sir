//palandrom
//393=393  ---> palan
//321=123  ---->not
#include<stdio.h>
int main(){
    int num,rev=0;
    printf("enter a number :");
    scanf("%d",&num);
    int check=num;
    do{
        rev=rev*10+num%10;
    }
    while(num=num/10);
    printf("value=%d",rev);
    if(check==rev){
        printf("palandrom number");
    }

}



