#include <stdio.h>
int main()
//17. PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR(&&)
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Maximum number = %d", a);
    else if (b >= a && b >= c)
        printf("Maximum number = %d", b);
    else
        printf("Maximum number = %d", c);

    return 0;
}
