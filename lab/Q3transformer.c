#include<stdio.h>
int main(){
//tranformer v1/v2=n1/n2  Q3
printf("-----------------------------programm beigan here---------------------------\n");

float n1,n2,v1;
printf("enter a value of n1 and n2:");
scanf("%f,%f",&n1,&n2);
printf("enter a value of voltage:");
scanf("%f",&v1);
printf("voltage2:%f",(v1*n2/n1));

}