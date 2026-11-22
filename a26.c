#include <stdio.h>
int main()
//26. PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N.
{
    int n, i, evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
            evenSum = evenSum + i;
        else
            oddSum = oddSum + i;
    }

    printf("Sum of Even numbers = %d\n", evenSum);
    printf("Sum of Odd numbers = %d", oddSum);

    return 0;
}
