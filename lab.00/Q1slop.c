   #include<stdio.h>
   int main(){
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
    return 0;
    
   }