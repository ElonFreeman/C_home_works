#include <stdio.h>
#include <windows.h>
//#include <time.h>

struct clock
{
    int second;
    int minute;
    int hour;

    struct date
    {
        int day;
        int week;
        int month;
        int year;
    };
    struct date DATE;
};

typedef struct clock CLOCK;
CLOCK time;
//struct clock struct date DATE;

void update(void)
{
    time.second++;

    if(time.second==60)
    {
        time.second=0;
        time.minute++;
    }

    if(time.minute==60)
    {
        time.minute=0;
        time.hour++;
    }

    if(time.hour==24)
    {
        time.hour=0;
        time.DATE.day++;
    }

    if(time.DATE.day==7)
    {
        time.DATE.day=0;
        time.DATE.week++;
    }

    if(time.DATE.week==7)
    {
        time.DATE.week=0;
        time.DATE.month++;
    }

    if(time.DATE.month==12)
    {
        time.DATE.month=0;
        time.DATE.year++;
    }
}

void display(void)
{
    printf("time\n%d:%d:%d\n\n",time.second,time.minute,time.hour);
    printf("date:\n%d.%d.%d",time.DATE.year,time.DATE.month,time.DATE.day);
}

void delay(void)
{
    Sleep(1000);
}


//main
int main()
{    
    time.second=time.minute=time.hour=0;

    while(1)
    {
        update();
        display();
        delay();
    }

    return 0;
}