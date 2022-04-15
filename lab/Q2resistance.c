 //resitance  Q2
 #include<stdio.h>
 int main(){
    
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
  
 }