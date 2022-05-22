#include<stdio.h>

int main(){
    //string in c
    char word[100];
    printf("entera string:");
    scanf("%[^\n]s",word);
    int l=0;
    while(word[++l]!='\0');
    printf("length:%d",l);
    int flag;
    for (int i=0;i<l/2;i++)
    {
        flag=-1;
        if(word[i]!=word[l-i]) flag=1;
    }
    printf("\n1 for true and -1 for false:%d",flag);
}