#include<stdio.h>

int main(){
    //string in c
    char str[100],word[100];
    printf("entera word:");
    scanf("%[^\n]s",str);
    printf("entera string:");
    scanf("\n%[^\n]s",word);
    int l=-1,l1=-1;
    while(str[++l]!='\0');
    while(word[++l1]!='\0');
    printf("length:%d",l1);
    int flag,k=0,i;
    for ( i=0;i<l;i++)
    {
      
        flag=-1;
        if(str[i]==word[k]){
            flag=1;
         
            k++;
        }
        if(k==l1-1){
                break;
            }
        if(flag==-1){
            k=0;
        }

    }
    printf("\n1 for true and -1 for false:%d",flag);
    printf("\nindex no.%d",i-k+1);

}