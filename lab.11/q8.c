//3. WAP to display the grade system of KIIT University based on total marks secured by a
//student in a semester. Use switch-case statement.
#include<stdio.h>
int main(){
    int o1,o2;
    int ch;
    printf("enter 2 operands:x,y");
    scanf("%d,%d",&o1,&o2);
    printf("enter operator:enter 1 for add\n 2 for substract \n3 for multiplication \n 4 for division ");
    scanf(" %d",&ch);


    switch(ch){
        case 1:
            printf("sum=%d",o1+o2);
            break;
        case 2:
             printf("subtract=%d",o1-o2);
             break;
        case 3:
             printf("multiplie=%d",o1*o2);
             break;
        case 4:
             printf("div=%d",o1/o2);
             break;
        default:
             printf("wrong input");


    }
}