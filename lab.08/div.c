#include<stdio.h>

int main(){
    int math,che,bio,eng,com;

    printf("Enter marks of math,che,bio,com,eng");
    scanf("%d,%d,%d,%d,%d",&math,&che,&bio,&com,&eng);
    float avg=(math+che+bio+eng+com)/5;


    if(avg>90) printf("good  'A' average:%f\n",avg);
    else if(avg>70) printf("well 'b' average:%f\n",avg);
    else if(avg>50) printf("not bad 'c' average:%f\n",avg);
    else if(avg>40) printf("just pass 'd' average:%f\n",avg);
    else printf("fail\n");

}
