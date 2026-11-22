#include <stdio.h>
int main()
//28. PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
{
    int n, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if(sum == temp)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
