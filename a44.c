#include <stdio.h>
int main()
//44. costumer paid amount
{
    int units;
    float bill;

    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    if(units <= 200)
        bill = units * 0.50;
    else if(units <= 400)
        bill = 100 + (units - 200) * 0.65;
    else if(units <= 600)
        bill = 230 + (units - 400) * 0.80;
    else
        bill = 425 + (units - 600) * 1.25;

    printf("Electricity bill = Rs. %.2f", bill);

    return 0;
}
