#include <stdio.h>
int main()
//7. PROGRAM TO CALCULATE AREA OF A TRIANGLE.
{
    float base, height, area;

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("Area of triangle = %.2f", area);

    return 0;
}

