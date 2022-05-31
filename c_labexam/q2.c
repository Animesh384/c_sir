/* Declare a structure in your name with the following data members:
Name
Age
Sex
Date of Birth
Take an array of size 10 of the above structure type. Write a programme to
assign values to all data members of the array and write a function to display
in the following format for all Female members

Sl No.  Name  Age  DOB(DD/MM/YY)
 */
#include<stdio.h>
#include<stdlib.h>
struct bio{
    char name[20];
    int age;
    char sex;
    char dateb[9]; // dd/mm/yy
}arr[10];

void display(struct bio *arr){
    printf("Sl No.\t  Name\t  Age\t  DOB(DD/MM/YY)\n");
    for(int i=0;i<10;i++){
        if (arr[i].sex=='f'||arr[i].sex=='F'){
        printf("%d\t %s\t  %d\t  %s\n",i+1,arr[i].name,arr[i].age,arr[i].dateb);
        }
    }
}

int main(){
   // printf("enter a values \n");
    printf("Name  Age sex DD/MM/YY \n");
    

    for(int i=0;i<2;i++){
        //scanf("%s",arr[i]name)
        scanf("\n%s %d %c %s",&arr[i].name,&arr[i].age,&arr[i].sex,&arr[i].dateb);
        //printf("\n%s %d %c %s",arr[i].name,arr[i].age,arr[i].sex,arr[i].dateb);
       
    }
     display(arr);


}