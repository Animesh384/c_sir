#include<stdio.h>
int main(){
   /*	for(int i=0;i<5;i++){
	    printf("%d\n",i);
               
	}
    int k=0;
    for(printf("hello");k=0;k++) printf("hi\n");
*/  int sum=0,count=0;
    for(int i=0;i<10;i++){
      int d;  
      printf("enter a number:");
      scanf("%d",&d);
      //if(d/2!=0){count+=1; sum+=d;}
      count+=d%2;
      sum+=d*(d%2);
      
    }
    printf("count:%d\n",count);
    printf("sum odd:%d\n",sum);
		       
}
