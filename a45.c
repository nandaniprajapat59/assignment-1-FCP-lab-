#include <stdio.h>
int main()
//45) PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, NEGATIVE, AND ZERO ELEMENTS
{
    int a[10], i, positive = 0, negative = 0, zero = 0;

    printf("Enter 10 numbers: ");

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++)
    {
        if(a[i] > 0)
            positive++;
        else if(a[i] < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zero elements = %d\n", zero);

    return 0;
}
