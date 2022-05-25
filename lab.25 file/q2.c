#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    int i=0;
    FILE *fp;
    fp=fopen("q2.c","r+");
    while ((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fseek(fp,0,SEEK_SET);
    printf("\n");

    while ((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }

return 0;
}
