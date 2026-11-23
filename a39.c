#include <stdio.h>
int main()
//39. PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
{
    int n, i, j, fact;
    float sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = 1;
        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + (float)i / fact;
        printf("%d/%d!+",i,i);
    }

    printf("=Sum = %.2f", sum);

    return 0;
}
