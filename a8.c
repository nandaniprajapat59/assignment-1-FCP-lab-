#include <stdio.h>
int main()
//to convert time period of revolution of earth from secs to mins,hrs and days 
{
    int seconds = 31558150;
    int days, hours, minutes;
    minutes=seconds/60;
    hours=minutes/60;
    days=hours/24;

    printf("Minutes = %d\n", minutes);
    printf("Hours = %d\n", hours);
    printf("Days = %d\n", days); 
     
    return 0;
}

