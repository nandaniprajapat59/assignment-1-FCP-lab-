#include <stdio.h>

int main()
{
    int x, n, y, i, p = 1;

    printf("Enter value of x and n: ");
    scanf("%d %d", &x, &n);

    switch(n)
    {
        case 1:
        	printf("y = 1 + x");
            y = 1 + x;
            break;

        case 2:
        	printf("y = 1 + x/n");
            y = 1 + x / n;
            break;

        case 3:
        	printf("y = 1 + x^n");
            for(i = 1; i <= n; i++)
                p = p * x;
            y = 1 + p;
            break;

        default:
        	printf("y = 1 + n * x");
            y = 1 + n * x;
    }

    printf("\nValue of Y = %d", y);

    return 0;
}
