/*
    1. WAP which takes two integer operands and one operator form the user, performs the
operation and then prints the result. (Consider the operators +,-,*, /, % etc). Use switch case
 */
#include<stdio.h>
int main(){
    int o1,o2;
    char ch;
    printf("enter 2 operands:");
    scanf("%d,%d",&o1,&o2);
    printf("enter operator( +,-,*, /, ):");
    scanf(" %c",&ch);


    switch(ch){
        case '+':
            printf("sum=%d",o1+o2);
            break;
        case '-':
             printf("subtract=%d",o1-o2);
             break;
        case '*':
             printf("multiplie=%d",o1*o2);
             break;
        case '/':
             printf("div=%d",o1/o2);
             break;
        default:
             printf("wrong input");


    }
}
