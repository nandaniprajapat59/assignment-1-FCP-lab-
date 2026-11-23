#include <stdio.h>
int main()
//36. PROGRAM TO PRINT 1,3,5,7,9………N.
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i = i + 2)
    {
        printf("%d ", i);
    }

    return 0;
}
