#include <stdio.h>
int main()
//59) PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY.
{
    int a[10], n, i, count = 0;

    printf("Enter 10 elements: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to find occurrence: ");
    scanf("%d", &n);

    for(i = 0; i < 10; i++)
    {
        if(a[i] == n)
        {
            count++;
        }
    }

    printf("Occurrence of %d = %d", n, count);

    return 0;
}
