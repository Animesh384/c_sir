#include<stdio.h>
int main(){
    char ch,ch1;
    repeat:
    printf("enter a char:");
    scanf(" %c",&ch);
    printf("enter a flag,Y,y,:");
    scanf(" %c",&ch1);
    printf("%d\n",ch);
    printf("%c\n",ch);
    
    if(ch1=='y'||ch1=='Y') goto repeat;


}