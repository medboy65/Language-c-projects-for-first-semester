#include <stdio.h>                     //@Mohammed Lamkhayar 24070260026//
int main () {

  int T[3][3],i,j,a,b; //I create a table with 3 rows and 3 columns to gets the 3x3 matrice’s value
  printf("Enter the elements of the 3X3 matrix respectively:\n");
  for(i=0;i<3;i++){  //Loop for the rows
    for(j=0;j<3;j++){   //Loop for the columns
        scanf("%d",&T[i][j]);
    }
  } //@Mohammed Lamkhayar 24070260026//

  a=T[0][0]+T[1][1]+T[2][2]; //’a’ its the value of the main elements of the matrice
  b=T[0][2]+T[1][1]+T[2][0]; //’b’ its the value of the diagonal elements of the matrice
  printf(" %d  %d",a,b);
  return 0;
}
//@Mohammed Lamkhayar 24070260026//
