#include<stdio.h>
/*int main( )
{ int m = 1;
if ( m==1)
{
printf("Kolkata ");
if (m == 2)
printf ( "Patna " ) ;
else
printf(" Ranchi") ;
}
else
printf(" END");
}
*/int s=1;

#include<stdio.h>
int rec(int n){
  /* s=s*n;
   printf("valude=%d\n",s);
   n--;
   if(n>0)
   rec(n);
   printf("valude=%d\n",s);
   */
  if(n==1)
  return(1);
  else
  return(n*rec(n-1));

}

int main(){
    int s=1;
    int r=rec(5);
    printf("%d",r);
}