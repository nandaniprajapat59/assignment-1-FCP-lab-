#include <stdio.h>
int main()
//46) PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.
{
    int n, i, num, max, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);

    max = num;
    second = num;

    for(i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
        {
            second = max;
            max = num;
        }
        else if(num > second && num != max)
        {
            second = num;
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d", second);

    return 0;
}
