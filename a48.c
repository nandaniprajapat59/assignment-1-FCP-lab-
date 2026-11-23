#include <stdio.h>
int main()
//48) PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS.
{
    int a[10], b[10], temp, i;

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
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("First array after swapping:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nSecond array after swapping:\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}
