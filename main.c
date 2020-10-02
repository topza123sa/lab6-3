#include<stdio.h>
 int myFactorial(int);

int main ()
{
int i,num;
int prime = 1;
while (printf("Input number:") && scanf("%d",&num)){
  if(num<0)
  break;
  if(num ==1 ) {
    printf ("%d Not prime number !!!\n ", num);
    continue;
  }


  // printf("\nInput number:");
  //scanf("%d",&num);
  for(i=2;i<num ; i ++){
    if ((num % i)== 0 ){
      prime = 0;
    }
  }
  if (prime==1){
    for(int x=1;i <13;i++ )
    printf("%d x %d = %d\n",num,i,i*num);
    
  }
  else if (prime ==0||num==1)
       printf(" Not prime number !!!\n",num);
       prime =1 ;


     
    return 0;
}
}