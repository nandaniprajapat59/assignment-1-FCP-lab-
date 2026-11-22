#include <stdio.h>
int main()
//4. PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.
{
    float f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("Temperature in Centigrade = %.2f", c);

    return 0;
}

