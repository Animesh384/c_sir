/* find out sum of k digit
*/
#include<stdio.h>
int dsum(int n){
    if(!n)
    return(0);
    else
    return(n%10+dsum(n/10));
}
int main(){
int x=dsum(2333);
printf("%d",x);


}