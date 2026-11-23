#include <stdio.h>

int main()
{
    int a[10], b[10], c[10], i;

    printf("Enter elements of first array:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second array:\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i = 0; i < 10; i++)
    {
        c[i] = a[i] + b[i];
    }

    printf("Addition of two arrays:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
