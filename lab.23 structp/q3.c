#include<stdio.h>
#include<stdlib.h>


int main(){
 struct address
    {
        char phone[15];
        char city[25];
        int pin;
    };
    struct emp
    {
        char name[25];
        struct address adr;
    };
    struct emp e={"jerry",{"7564847474","Bengal",10}};
    printf("\nname=%s\nphone=%s",e.name,e.adr.phone);
    printf("\ncity=%s\npin=%d",e.adr.city,e.adr.pin);

return 0;
}