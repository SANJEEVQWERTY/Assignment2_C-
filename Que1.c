// Write a program to calculate average of three numbers. Numbers are given by the user
#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Average of three number are");
    scanf("%f%f%f",&a,&b,&c);
    d = (a+b+c)/3;
    printf("first number is %f second number is %f and third number is %f and result are %f",a,b,c,d);
    //getch(); - VOID HONE PAR GETCH LGTA HAI
    return 0;
}
