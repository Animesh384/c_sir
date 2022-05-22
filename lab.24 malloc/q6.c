#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf(":^_^:\n");
    printf(":   :\n");
    printf(":   :\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    int max=-100000;
    for(int i=0;i<n;i++){
        *(ptr+i)=i;
        printf("%d\n",*(ptr+i));
        if(max<ptr[i]) max=ptr[i];
    }
    *ptr=max;
     printf("0th index=%d\n",*ptr);
}