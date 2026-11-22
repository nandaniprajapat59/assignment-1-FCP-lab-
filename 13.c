#include <stdio.h>
int main()
//13. PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD.
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("The number is Even");
    else
        printf("The number is Odd");

    return 0;
}
