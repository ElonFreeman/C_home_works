#include <stdio.h>

void dayaver(float daytemp[][4])
{
    int count,day;
    float sum,aver;
    for(day=0;day<7;day++)
    {
        for(count=0;count<4;count++)
        {
            sum+=daytemp[day][count];
        }

        aver=sum/(day+1);
        printf("%d:%f",day+1,aver);
    }

}

float daydiff(float daytemp[][4])
{
    float max,min,diff,diffs[]={};
    int count,day;

    for(day=0;day<7;day++)
    {
        for(count=0;count<4;count++) //max
        {
            max=daytemp[day][0];
            if(daytemp[day][count]>max)
            {
                max=daytemp[day][count];
            }

        }

        for(count=0;count<4;count++) //min
        {
            min=daytemp[day][0];
            if(daytemp[day][count]<min)
            {
                min=daytemp[day][count];
            }
        }

        diff=max-min;
        printf("%d:%f",day+1,diff);
        diffs[day]=diff;

        return diffs[day];
    }

    
}

float week_maxdiff(float daydiffs[])
{

}


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

    float daydiffs[]={};

    printf("daily average:\n");
    dayaver(temp_data);

    printf("daily different:\n");
    daydiff(temp_data);

    for(int day=0;day<7;day++)
    {
        daydiffs[day]=daydiff(temp_data);
    }

    return 0;
}