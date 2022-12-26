// Implementing switch-case statement through an exmaple

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character:\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'A':
    case 'a':
        printf("%c is a VOWEL\n", ch);
        break;
    case 'E':
    case 'e':
        printf("%c is a VOWEL\n", ch);
        break;
    case 'I':
    case 'i':
        printf("%c is a VOWEL\n", ch);
        break;
    case 'O':
    case 'o':
        printf("%c is a VOWEL\n", ch);
        break;
    case 'U':
    case 'u':
        printf("%c is a VOWEL\n", ch);
        break;

    default:
        printf("%c is not a VOWEL\n", ch);

        return 0;
    }
}
