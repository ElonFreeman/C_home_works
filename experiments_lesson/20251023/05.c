#include <stdio.h>
int main()
{   
    float height_m;
    float standard_weight;
    scanf("%f",&height_m);
    standard_weight=((height_m*100)-80)*0.7;
    printf("%.2f kg\n", standard_weight);
    return 0;
}