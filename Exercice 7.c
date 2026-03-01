#include <stdio.h>                         //@Mohammed Lamkhayar 24070260026//
int main () {
  int n,r,a,b,c;
  do{
  printf("Enter a four-degit number:");   //This phrase give to the user the conditions
  scanf("%d",&n);                                                                                                             //@Mohammed Lamkhayar 24070260026//
  if(n>9999 || n<1000){  //The conditions we need to the code work
    printf("Please respect the question.\n");
  }else{ //If the conditions are right the code work
  a=n/1000;  // To know how many thousands
  r=n%1000;  //To deducate the thousands
  b=r/100;  // To know how many hundreds
  r=r%100;  //To deducate the hundreds
  c=r/10;  // Know how many tens
  r=r%10;  // Deducate the tens and the last r will take the units
  printf("%d %d %d %d",a,b,c,r);

  }//@Mohammed Lamkhayar 24070260026//

  }while(n>9999 || n<1000);  //If the user will not respect the question, this command give him another chance
  return 0;
}
//@Mohammed Lamkhayar 24070260026//
