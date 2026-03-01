#include <stdio.h>   //@Mohammed Lamkhayar 24070260026//
int main()
{
long long s,a; //I choose ‘long long’ instead of ‘int’ because the number maybe will be a large number
int n,i,j;
    do{
    s=0;       // I choose 's' as the total sum and i gave it 0 because the sum now is empty
    printf("Enter a positive number less or equal to 20 to calculate the serie Sn:"); //I give the user the conditions of the number he will enter it
    scanf("%d",&n); //'n' will take the value of the number entered by the user
    if(n>=0 && n<=20){      //This is the condition for our number
    for(i=1;i<=n;i++){   //The loop which will calcul the sum of the factorials
        a=1;                       //I put another variable and named as ‘a’ to help me to calculate the factorial in the next loop
        for(j=1;j<=i;j++){ // The loop wich will calculate the factorials of the numbers
            a=a*j;
        }                                    //@Mohammed Lamkhayar 24070260026//
        s=s+a;
    }
    printf("The value of Sn is: %lld",s); //This phrase is the answer shown if the user respect the conditions
}
else{
    printf("Please respect the question. \n");  //The message shown if the user didn’t respect the conditions of the question

}
    }
while(n<0 || n>20);   //The loop wich will give another chances to the user to enter another number if he didn’t respect the conditions
    return 0;
}



       //@Mohammed Lamkhayar 24070260026//
