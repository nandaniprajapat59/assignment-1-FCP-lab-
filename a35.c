#include <stdio.h>
int main()
//35. READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
{
    int n, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    while(sum >= 10)
    {
        n = sum;
        sum = 0;

        while(n > 0)
        {
            rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }
    }

    printf("Single digit answer = %d", sum);

    return 0;
}
