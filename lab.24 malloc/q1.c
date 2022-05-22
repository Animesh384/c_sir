#include<stdio.h>
union exp
{
    int i;
    float f;
    char str[20];
};

int main(){
    union exp var;
    scanf("%d",&var.i);
    printf("%d\n",var.i);
    scanf("%f",&var.f);
    printf("%.2f\n",var.f);
    scanf("%s",var.str);
    printf("%s\n",var.str);


    // try to access var.i

    printf("%d\n",var.i);


    
}