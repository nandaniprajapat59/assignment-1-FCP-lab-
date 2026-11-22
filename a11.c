#include <stdio.h>
int main()
//11. PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
{
    int total, hr, min, sec, rem;

    printf("Enter total seconds: ");
    scanf("%d", &total);
    
    hr = total / 3600;
    rem = total % 3600;
    min = rem / 60;
    sec = rem % 60;
   
    printf("Time = %d Hours %d Minutes %d Seconds",
           hr, min, sec);

    return 0;
}

