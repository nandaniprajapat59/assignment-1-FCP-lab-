#include <stdio.h>
int main()
//16. PROGRAM TO READ THREE NOS. AND PRINT MAX. 
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
        printf("Maximum number = %d", a);
    else if (b > a && b > c)
        printf("Maximum number = %d", b);
    else
        printf("Maximum number = %d", c);

    return 0;
}
