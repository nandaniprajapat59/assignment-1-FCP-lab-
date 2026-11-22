#include <stdio.h>
int main()
//19. PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDITIONAL OPERATOR.
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    (ch >= 'a' && ch <= 'z') ? printf("Small case letter") : printf("Not a small case letter");

    return 0;
}
