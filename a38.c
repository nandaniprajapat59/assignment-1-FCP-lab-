#include <stdio.h>
int main()
//38. PROGRAM TO PRINT 1,4,9,16,25,………N.
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i * i);
    }

    return 0;
}
