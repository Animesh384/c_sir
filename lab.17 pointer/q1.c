#include<stdio.h>
//pointer variable

// * derefrencing operator or value of location
// & address of variable


/**
*(address of array)
       convert address from higher level to lower dimension to next lower dimension
       *&(VARIABLE)=variable


 */


int main(){
    char ch=65;
    printf("%d : %c\n",ch,ch);
    int a[10];
    for(int i=0;i<10;i++){
           *(a+i)=i;

    }
     for(int i=0;i<10;i++){
           printf("%u `%d` %d\n",(a+i),(&a+i),*(a+i));

    }


    int  b[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("`%u` %u %u :%d\n",(&b+i),b+i,*(b+i)+j,*(*(b+i)+j));
        }
    }
     char  b1[2][2]={{1,2},{3,'4'}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("`%u` %u %u :%c\n",(&b1+i),b1+i,*(b1+i)+j,*(*(b1+i)+j));
        }
    }
     double b2[2][2]={{1.1,2.3},{3.4,4.6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("`%u` %u %u : %.f\n",(&b2+i),b2+i,*(b2+i)+j,*(*(b2+i)+j));
        }
    }



}


// int a[10] ={3,4,5,6,7,8} size of each int is of 2 bytes location:5000

// 

