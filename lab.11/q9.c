/*3. WAP to display the grade system of KIIT University based on total marks secured by a
student in a semester. Use switch-case statement.*/
#include<stdio.h>
int main(){
    int t,T;
    printf("total marks secured by a sudent:");
    scanf("%d",&t);
    printf("total marks");
    scanf("%d",&T);
    t=(t*10)/T;

    switch(t){
        case 10:
        printf("O");
        break;
        case 9:
        printf("O");
        break;
        case 8:
        printf("E");
        break;
        case 7:
        printf("A");
        break;
        case 6:
        printf("B");
        break;
        case 5:
        printf("C");
        break;
        case 4:
        printf("D");
        break;
        case 3:
        printf("F");
        break;
        default:
        printf("LOL");
    }
}