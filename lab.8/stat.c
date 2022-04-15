#include<stdio.h>
int main(){

//never use level in loop

/*intput: score
 * output: avg
 */
/*temporary i sum_score;
 * avg_score*/
int score,sum=0,i=1;
float avg;
repeat:
printf("enter the score of %d player",i);
scanf("%d",&score);
if(score<0) goto repeat;
sum+=score;
i++;

if(i<=11) goto repeat;
avg=sum/11;
printf("avg value:%f\n",avg);

return 0;    

}
