#include <stdio.h>
int main()
//15. PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.
{
    int m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 60)
        printf("First Division");
    else if (percentage >= 45)
        printf("Second Division");
    else if (percentage >= 33)
        printf("Third Division");
    else
        printf("Fail");

    return 0;
}
