#include <stdio.h>     //@Mohammed Lamkhayar 24070260026//
int main()
{
    int T[10],i,j;  //Insert an array wich will take 10 numbers
    printf("Enter 10 unordered numbers respectively:\n");
    for(i=0;i<10;i++){   //The loop that will ask to write the 10 numbers
       scanf("%d",&T[i]);
    }                                 //@Mohammed Lamkhayar 24070260026//
    for(i=0;i<10;i++){  //The loop wich will take all the numbers to use it in the next loop
        for(j=i+1;j<10;j++){  // The loop wich will compare the selected number by the last loop and compare it with the others
            if(T[i]>T[j]){  //The condition that will check if the number selected had a number smaller than it self
                T[i]=T[i]+T[j];   //Those tree line to changes the places between two numbers
                T[j]=T[i]-T[j];
                T[i]=T[i]-T[j];
            }
        }                      //@Mohammed Lamkhayar 24070260026//
    }
    for(i=0;i<10;i++){   //Finally this loop will show us the numbers in the right order
        printf("%d  \n",T[i] );
    }
    return 0;
}

   //@Mohammed Lamkhayar 24070260026//
