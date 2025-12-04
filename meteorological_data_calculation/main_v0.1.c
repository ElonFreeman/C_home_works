#include <stdio.h>

//1.
void dayaver(float daytemp[][4])
{
    int count,day;
    float sum,aver;
    for(day=0;day<7;day++)
    {
        sum=0;

        for(count=0;count<4;count++)
        {
            sum+=daytemp[day][count];
        }

        aver=sum/4.0;
        printf("%d:%f\n",day+1,aver);
    }

    return 0;
}

//2.
void daydiff(float daytemp[][4])
{
    int count,day;
    float max,min,diff,diffs[day];

    for(day=0;day<7;day++)
    {
        max=daytemp[day][0];
        for(count=0;count<4;count++) //max
        {
            if(daytemp[day][count]>max)
            {
                max=daytemp[day][count];
            }

        }

        min=daytemp[day][0];
        for(count=0;count<4;count++) //min
        {
            if(daytemp[day][count]<min)
            {
                min=daytemp[day][count];
            }
        }

        diff=max-min;
        printf("%d:%f\n",day+1,diff);
        diffs[day]=diff;
    }

    return diffs;
}

//3.
void week_maxdiff(float daydiffs[])  //the daily maximum and minimum of temperature
{
    float max=daydiffs[0],min=daydiffs[0];
    int day,contamax=0,contamin=0;

    for(day=0;day<7;day++)  //max value
    {
        if(daydiffs[day]>max)
        {
            max=daydiffs[day];
            contamax=day+1;
        }
    }
    printf("%d:%f\n",contamax,max);

    for(day=0;day<7;day++)  //min value
    {
        if(daydiffs[day]<min)
        {
            min=daydiffs[day];
            contamin=day+1;
        }
    }
    printf("%d:%f\n",contamin,min);
}


//main function
int main()
{
    float temp_data[7][4]=
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20},
        {21,22,23,24},
        {25,26,27,28}
    };

    float daydiffs[]={},maxdiff,mindiff;

    printf("daily average:\n");
    dayaver(temp_data);

    printf("daily different:\n");
    daydiff(temp_data);

    /*for(int day=0;day<7;day++)
    {
        daydiffs[day]=daydiff(temp_data);
    }*/

    //printf("weekly maximum and minimum:\n");
    //week_maxdiff(daydiffs);


    return 0;
}