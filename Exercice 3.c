#include <stdio.h>
int main()
{
 float grade;
    do{
    printf("Enter a value within 0 to 100:");
    scanf("%f",&grade);
    if(grade>=0 && grade<=100){
    if(grade>=90 && grade<=100){
        printf("A");
    }
     if(grade>=80 && grade<=89){
        printf("B");
    }
     if(grade>=70 && grade<=79){
        printf("C");
    }
     if(grade>=60 && grade<=69){
        printf("D");
    }
     if(grade>=0 && grade<60){
        printf("E");
    }
    }else{
    printf("Please respect the conditions of the question.\n");
    }
    }while(grade<0 || grade>100);
       return 0;
}
