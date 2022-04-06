// iteam l,h

#include<stdio.h>



int search(int it,int st,int lt){

    int a[20],po=-1;
    for(int i=0;i<20;i++)
    {
           printf("enter a number:");
           scanf("%d",&a[i]);//scanf("%d",a+i);
        }
    for(int i=st;i<lt;i++){
        if(it==a[i]){
            po=i;
            break;
        }
    }
    return(po);
}

int main(){
    int it,st,lt;
printf("enter a iteam , start index, last index  it,st,lt:");
scanf("%d,%d,%d",&it,&st,&lt);
int r=search(it,st,lt);
printf("position:%d",r);
return (0);

}
