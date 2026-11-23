#include <stdio.h>
int main()
//40. READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.
{
    int n, sum = 0;

    printf("Enter numbers (enter a negative number to stop):\n");

    while(1)
    {
        scanf("%d", &n);

        if(n < 0)
            break;

        sum = sum + n;
    }

    printf("Sum = %d", sum);

    return 0;
}
