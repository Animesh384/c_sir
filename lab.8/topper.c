#include<stdio.h>

int main(){
    int i=1,math,che,bio,eng,com,id;
    float top,avg;
    while(i<=8){
    
    printf("Enter marks of math,che,bio,com,eng:");
    scanf("%d,%d,%d,%d,%d",&math,&che,&bio,&com,&eng);
    avg=(math+che+bio+eng+com)/5;

    if(top<avg){ top=avg; id=i;}
    i++;
    
    

}

printf("topper id:%d average:%f\n",id,top);

}
