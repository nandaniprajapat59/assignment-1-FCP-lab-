#include <stdio.h>
int main()
//31. PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
{
    int n, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
