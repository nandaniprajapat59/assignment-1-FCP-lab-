#include <stdio.h>
int main()
//PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE.
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    printf("Enter marks of five subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    printf("Total Marks = %d\n", total);

    percentage = (total / 500.0) * 100;
    printf("Percentage = %.2f\n", percentage);

    return 0;
}
