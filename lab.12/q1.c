a#include<stdio.h>
void uchar(char ch){
    if((int)ch>=97&&(int)ch<=122){
        ch=ch-32;
        printf("char=%c",ch);
    }

}

int main(){
    char ch;
    printf("enter character :");
    scanf("%c",&ch);
    uchar(ch);


}