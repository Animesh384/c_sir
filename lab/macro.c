#include<stdio.h>
#define g 9.8
#define sqr(a) a*a
#define inc(C) C+2
int main(){
    /*
    printf("value:%d\n",sqr(10));
     printf("value:%d\n",inc(12));

*/

    //slope of line         Q1
    printf("-----------------------------programm beigan here---------------------------\n");
    float x1,x2,y1,y2;
    printf("enter x cordinates:");
    scanf("%f,%f",&x1,&x2);
    printf("enter  y cordinate:");
    scanf("%f,%f",&y1,&y2);
    printf("%f,%f",x1,x2);
    float s=(y2-y1)/(x2-x1);
    printf("slope:%f",s);
    
/*

    //resitance  Q2
    
float r1,r2,r3,v;
char ch;
printf("enter 1 for serial and 2 for parallel:");
scanf("%c",&ch);
printf("-----------------------------programm beigan here---------------------------\n");
if(ch=='1'){
    printf("enter r1,r2,r3:");
    scanf("%f,%f,%f",&r1,&r2,&r3);
    printf("enter vortage:");
    scanf("%f",&v);
    float rs=1/r1+1/r2+1/r3;
    printf("resistance:%f\n",1/rs);
    printf("current:%f",v*rs);}
else if (ch=='2'){
    printf("enter r1,r2,r3:");
    scanf("%f,%f,%f",&r1,&r2,&r3);
    printf("enter vortage:");
    scanf("%f",&v);
    float rs=r1+r2+r3;
    printf("resistance:%f\n",rs);
    printf("current:%f\n",v*rs);
}
else
  printf("wrong inpute");
    



//tranformer v1/v2=n1/n2  Q3
printf("-----------------------------programm beigan here---------------------------\n");

float n1,n2,v1;
printf("enter a value of n1 and n2:");
scanf("%f,%f",&n1,&n2);
printf("enter a value of voltage:");
scanf("%f",&v1);
printf("voltage2:%f",(v1*n2/n1));

*/
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