#include <stdio.h>
int main()
{
    int distance,ride_bike,on_foot;
    scanf("%d",&distance);

    ride_bike=27+23+(distance/3.0);
    on_foot=distance/1.2;

    if(ride_bike<on_foot)
    {
        printf("Bike");
    }

    else if(ride_bike>on_foot)
    {
        printf("Walk");
    }

    else
    {
        printf("All");
    }
    return 0;
}