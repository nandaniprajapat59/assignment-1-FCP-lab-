#include <stdio.h>
int main()
//42.  READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            count++;
    }

    if(n <= 1)
        printf("Neither Prime nor Composite");
    else if(count == 2)
        printf("Prime Number");
    else
        printf("Composite Number");

    return 0;
}
