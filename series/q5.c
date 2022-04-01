#include<stdio.h>

int main(){
    int n;
    float sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    float j=0;
    for(int i=1;i<=n;i++){
        //sum=(i%2==0?sum+i/(n-j):sum+(n-j)/i);
        if(i%2==0){
            sum=sum+i/(n-j);
            printf("%d/%.f+",i,n-j);
        }
        else{
            sum=sum+(n-j)/i;
            printf("%.f/%d+",n-j,i);

        }

        j+=2;
    }
    printf("\b=%.4f\n",sum);
    return(0);

}
