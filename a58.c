#include <stdio.h>
int main()
//58) PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.
{
    int a[10], n, i, found = 0;

    printf("Enter 10 elements: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &n);

    for(i = 0; i < 10; i++)
    {
        if(a[i] == n)
        {
            printf("Number found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Number not found");

    return 0;
}
