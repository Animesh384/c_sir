/* find out sum of k digit
*/
#include<stdio.h>
int dsum(int n){
    if(!n)
    return(0);
    else
    printf("%d+",n%10);
    return(n%10+dsum(n/10));
}
int main(){
    int s;
    printf("entter a number:");
    scanf("%d",&s);
int x=dsum(s);
printf("\b =%d",x);


}