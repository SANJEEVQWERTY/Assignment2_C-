// Write a program to calculate circumference of a circle
#include<stdio.h>
int main()
{
    float r, a;
    printf("Circumference of a circle is");
    scanf("%f",&r);
    a= 2*3.14*r*r;
    printf("given radius of circle is %f and result is %f", r,a);
    getch();
    return 0;
}