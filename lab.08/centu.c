#include<stdio.h>
int main(){

//never use level in loop

/*intput: score
 * output: avg
 */
/*temporary i sum_score;
 * avg_score*/
int c=0,score,i=1;
float avg;
repeat:
printf("enter the score of %d player",i);
scanf("%d",&score);
if(score<0) goto repeat;
c+=score/100;
i++;

if(i<=11) goto repeat;
printf("total number of century made by player:%d",c);

return 0;    

}
