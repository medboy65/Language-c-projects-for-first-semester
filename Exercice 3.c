#include <stdio.h>
int main()                                          //@Mohammed Lamkhayar 24070260026//
{
 float grade;
    do{
    printf("Enter a value within 0 to 100:");                              //@Mohammed Lamkhayar 24070260026//
    scanf("%f",&grade);
    if(grade>=0 && grade<=100){
    if(grade>=90 && grade<=100){
        printf("A");
    }
     if(grade>=80 && grade<=89){   //@Mohammed Lamkhayar 24070260026//
        printf("B");
    }
     if(grade>=70 && grade<=79){
        printf("C");
    }
     if(grade>=60 && grade<=69){
        printf("D");
    }
     if(grade>=0 && grade<60){                                                                    //@Mohammed Lamkhayar 24070260026//            //@Mohammed Lamkhayar 24070260026//
        printf("E");
    }
    }else{
    printf("Please respect the conditions of the question.\n");
    }
    }while(grade<0 || grade>100);
       return 0;
}
//@Mohammed Lamkhayar 24070260026//
