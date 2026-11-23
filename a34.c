#include <stdio.h>
int main()
//34. PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
{
    int n, i, a = 0, b = 1, c;

    printf("Enter number of terms 0f fibonacci series: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
