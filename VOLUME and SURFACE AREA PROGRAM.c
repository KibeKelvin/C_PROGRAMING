/*
NAME:KIBE KELVIN
REG NO:CT101/G/24702/24
DESCRIPTION:A PROGRAM TO COMPUTE VOLUME AND SURFACE AREA OF A CYLINDER
V=πr×r×h
S.A=2πr×r+2πrh
*/
#include<stdio.h>
#define PI 3.14159
int main(){
    //variable variation
float pi,radius,height,volume,surface_area;

    printf("Enter the radius of the cylinder:");
    scanf("%d,&radius");

    printf("Enter the height of the cylinder:");
    scanf("%d,&height");

    scanf("Volume=PI*radius*radius*height");

    scanf("surface area=2 * PI * radius * (radius + height)");

    printf("volume of the cylinder:%.2d,volume\n");

    printf("surface area of the cylinder:%.2d\n,surface_area\n");

    return 0;
}
