#include<stdio.h>

int main(){
    //string in c
    char str[100],str1[100];
    printf("enter a string:");
    scanf("%[^\n]s",str);
     printf("enter a string1:");
    scanf("\n%[^\n]s",str1);
   /*   ch;
   char printf("enter a character:");
    scanf("\n%c",&ch); */
    int count=0;
    int l=0;
    while(str[++l]!='\0');
    int l1=0;
    while(str[++l1]!='\0');
    str[l1]=' ';
    l1++;
    l++;

    for (int i=0;i<l;i++)
    {
        str[l1++]=str1[i];
    }
    printf("%s",str);
}
