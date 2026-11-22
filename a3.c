#include <stdio.h>
int main()
//PROGRAM TO CALCULATE GROSS SALARY.
{
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;//HRA – House Rent Allowance
    da = basic * 0.40;//DA – Dearness Allowance5

    gross = basic + hra + da;

    printf("Basic Salary = %.2f\n", basic);
    printf("HRA = %.2f\n", hra);
    printf("DA = %.2f\n", da);
    printf("Gross Salary = %.2f\n", gross);

    return 0;
}
