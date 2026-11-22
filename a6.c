#include <stdio.h>
int main()
//6. PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);


    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

