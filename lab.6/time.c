#include<stdio.h>
#define pi 3.14
#define sqrt(a) a*a
#define g 9.8

int main(){


    int l;
    printf("enter length of pendul3am:");
    scanf("%d",&l);
    printf("length(m)\ttimeperiod(sec)\n");
    printf("%d\t\t%f",l,(2*pi*sqrt(l/g)));

    l=10;
   
    printf("%d\t\t%f\n",l,(2*pi*sqrt(l/g)));

    l+=10;
   
    printf("%d\t\t%f\n",l,(2*pi*sqrt(l/g)));

    l+=10;
    
    printf("%d\t\t%f\n",l,(2*pi*sqrt(l/g)));

    l+=10;
    
    printf("%d\t\t%f\n",l,(2*pi*sqrt(l/g)));

    l+=10;
    
    printf("%d\t\t%f\n",l,(2*pi*sqrt(l/g)));

    return 0;

}