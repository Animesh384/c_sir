#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *filep;
    char *ch=(char*)malloc(sizeof(ch));
    int n;
    printf("enter length of string:");
    scanf("%d",&n);
    char *str=(char*)malloc(n*sizeof(char));
    scanf(" %[^\n]s",str);
    filep=fopen("find.txt","w+");
    fputs(str,filep);
    fclose(filep);
    filep=fopen("find.txt","r");
    char *str1=(char*)malloc(n*sizeof(char));
    fgets(str1,n,filep);
    int count=0;
    printf("enter character:");
    scanf(" %c",ch);
    printf("%s",str1);
    while (*str1!='\0')
    {
        if(*ch==*str1) count++;
        str1++;
    }
    printf(" the frequency of `%c` is %d",*ch,count);
    
    
    fclose(filep);
    

}