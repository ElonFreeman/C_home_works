#include <stdio.h>
#include <math.h>
#define PI 3.14159

float cylinder(float r,float h)
{
    float volume;
    volume=PI*pow(r,2)*h;
    return volume;
}

int main()
{
    float cylinder(float r,float h);
    int r=2,h=4;
    float v;
    v=cylinder(r,h);
    return 0;
}