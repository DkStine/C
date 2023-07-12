#include <stdio.h>

void find(char ptr[], char letter)
{
    while (*ptr != '\0')
    {
        if (*ptr == letter)
        {
            printf("Letter %c is present\n", letter);
            break;
        }
        else
        {
            printf("Letter %c is absent\n", letter);
            break;
        }
        *ptr++;
    }
}

int main()
{
    char str[20];

    printf("Enter the required string: ");
    gets(str);

    find(str, 'l');

    return 0;
}