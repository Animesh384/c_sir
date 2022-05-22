#include<stdio.h>

int main(){
    //string in c
    char str[100]="hello world";
    //printf("%s\n",str);
    int i=0;
    char dis[100]=" ";
    while(str[i]!='\0'){
         dis[i]=str[i++];
        // printf("%c",dis[i]);
    }
    printf("%s\n",dis);


   /*  scanf("%c",str);
       printf("\n%s",str); */

}
