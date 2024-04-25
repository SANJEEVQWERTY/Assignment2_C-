// Write a program to calculate valume of cuboid
#include<stdio.h>
int main()
{
    float l,b,h,v;
    printf("volume of cuboid are given by");
    scanf("%f%f%f",&l,&b,&h);
    v = (l*b*h);
    printf("these volume is %f",v);
    return 0;
}