#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *filepoint;
    filepoint=fopen("materix.txt","r+");
    char ch;
    int n[10];
    ch='d';
    int k;
    for(int i=0;i<10;i++){
     scanf("%d",&k);
    fprintf(filepoint,"%d ",k);
    }
    fseek(filepoint,0,SEEK_SET);
    for(int i=0;i<10;i++){
    fscanf(filepoint,"%d",&n[i]);
    printf(" %d ",n[i]);
    }
    return 0;
}