//Write a program to calculate simple interst
#include<stdio.h>
int main()
{
   float A,P,R,T;
   printf("simple interst are given by");
   scanf("%f%f%f",&P,&R,&T);
   A = (P*R*T)/100;
   printf("simple interst are %f",A);
   return 0;

}