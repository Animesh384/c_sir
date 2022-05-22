#include<stdio.h>

int main(){
    //string in c
    char str[100];
    printf("enter a string:");
    scanf("%[^\n]s",str);
    char ch;
    printf("enter a character:");
    scanf("\n%c",&ch);
    int count=0;
    for (int i = 0;str[i]!='\0';i++)
    {
      if(str[i]==ch)
      count++;

    }
    printf("frequency:%d",count);
   

}
