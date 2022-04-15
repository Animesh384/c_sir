#include<stdio.h>
#define g 9.8
int main(){
// eiffe tower    Q4
printf("-----------------------------programm beigan here---------------------------\n");


float u,t=1,v,s;
printf("enter a value of U:");
scanf("%f",&u);
printf("velocity at t=1:%f\n",u+g*t);
printf("distance at t=1:%f\n",u*t+(g*t*t)/2);
t++;
printf("velocity at t=2:%f\n",u+g*t);
printf("distance at t=2:%f\n",u*t+(g*t*t)/2);
t++;
printf("velocity at t=3:%f\n",u+g*t);
printf("distance at t=3:%f\n",u*t+(g*t*t)/2);
t++;
printf("velocity at t=4:%f\n",u+g*t);
printf("distance at t=4:%f\n",u*t+(g*t*t)/2);


}