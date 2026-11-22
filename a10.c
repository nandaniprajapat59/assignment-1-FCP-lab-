#include <stdio.h>
int main()
//10. C Program to Calculate the Cut-Off Mark of a Student
{
    float M, P, C, E, CM;

    printf("Enter marks in Mathematics, Physics, Chemistry and Entrance Exam: ");
    scanf("%f %f %f %f", &M, &P, &C, &E);

    CM = M/2 + P/2 + C/2 + E;

    printf("Cut-off Mark = %.2f", CM);

    return 0;
}

