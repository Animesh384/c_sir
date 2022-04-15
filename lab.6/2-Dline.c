#include<stdio.h>

int main(){
    float x,y,x1,y1,x2,y2,x3,y3,m1,m2;
    printf("_____________________2-D line__________________\n");
    printf("<for first line>\n");
    printf("enter first line cordinet x,y,x1,y1 :");
    scanf("%f,%f,%f,%f",&x,&y,&x1,&y1);
    printf("<for second line>\n");
    printf("enter second line cordinet x2,y2 x3,y3 :");
    scanf("%f,%f,%f,%f",&x2,&y2,&x3,&y3);
    m1=(y1-y)/(x1-x);
    m2=(y3-y2)/(x3-x2);
    printf("%f\n",m1);
    printf("%f\n",m2);
    
    printf("is lines are perpendicular to each other:%f",(m1*m2*(-1)));




    return 0;
}