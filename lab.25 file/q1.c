#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char ch;
    int i=0;
    FILE *fp;
    fp=fopen("test.txt","r+");
    /* while ((ch=fgetc(fp))!=EOF)
    {
        printf("%c\n",ch);
    } */
    char str[100];
    int n=10;
    fgets(str,1000,fp);
    printf("%s",str);
    fgets(str,1000,fp);
    printf("%s",str);
    fgets(str,1000,fp);
    printf("%s",str);
    fgets()
}