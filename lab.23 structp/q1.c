#include<stdio.h>
#include<stdlib.h>

struct bio{
    char name[100];
    char sex;
    int age;
} arr[10];

int main(){
    for(int i=0;i<10;i++){
    printf("emter name:");
    scanf(" %[^\n]s",&arr[i].name);
    printf("emter sex:");
    scanf(" %c",&arr[i].sex);
    printf("enter age:");
    scanf("%d",&arr[i].age);
    }
    int fage=0,mage=0;
    for(int i=0;i<10;i++){
    printf("\nname:%s",arr[i].name);
    printf("\nsex:%c",arr[i].sex);
    printf("\nenter age:%d",&arr[i].age);
    if((arr[i].sex=='m'||arr[i].sex=='M')&&arr[fage].age<arr[i].age){
        mage=i;
        
    }
    if((arr[i].sex=='f'||arr[i].sex=='F')&&arr[mage].age<arr[i].age){
        fage=i;
        
    }
    }
    printf("\noldest lady %s  oldest man %s",arr[fage].name,arr[mage].name);
   // printf("\n%d ,,,%d",mage,fage);


}