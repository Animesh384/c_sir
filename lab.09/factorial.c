#include<stdio.h>
int main(){
	int n;
	printf("enter n for factorial of n:");
	scanf("%d",&n);
	int f=1;
	for(int i=n;i>0;i--){
		f=f*i;
		printf("%d\n",f);


	
	
	}
	printf("final value:%d\n",f);

}
