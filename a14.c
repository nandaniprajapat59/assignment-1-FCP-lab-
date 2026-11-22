#include <stdio.h>
int main()
//14.CHECKING WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.

{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Capital Letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("Small Case Letter");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special Symbol");

    return 0;
}
