#include <stdio.h>
int main()
//23. PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>).
{
    int base, exponent, i;
    int power = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);

    for(i = 1; i <= exponent; i++)
    {
        power = power * base;
    }

    printf("Power = %d", power);

    return 0;
}
