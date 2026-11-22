#include <stdio.h>
int main()
//9. PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.
{
    int hr, min, sec, total;

    printf("Enter hours, minutes and seconds: ");
    scanf("%d %d %d", &hr, &min, &sec);

    total = (hr * 3600) + (min * 60) + sec;

    printf("Total seconds = %d", total);

    return 0;
}

