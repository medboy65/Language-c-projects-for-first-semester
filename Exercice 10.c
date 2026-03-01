#include <stdio.h>                      //@Mohammed Lamkhayar 24070260026//
int main () {

  int n,i,prime;  //’prime’ will help me to know if its prime or no
  do{
    printf("Please enter a number to check if its prime or not:");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++){ //The loop will calculate the rest of the division of the number entred by the user and all the numbers smaller than the half of the same number
    if(n%i==0){ //The condition will give’prime’ a value 0 or 1
        prime=0;
     break;
    }                               //@Mohammed Lamkhayar 24070260026//
    else{
        prime=1;
    }
  }
  if(prime==0 && n>1){  //The conditions to know if its prime or no
    printf("No.",n);
  }else if(prime==1 && n>1){
  printf("It is a prime.",n);
  }
  else {                                                              //@Mohammed Lamkhayar 24070260026//
    printf("Please respect the question.\n ");
  }

  }while(n<1);
  return 0;
}



        //@Mohammed Lamkhayar 24070260026//
