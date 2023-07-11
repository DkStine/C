#include <stdio.h>

void search(char *ptr, char letter)
{
    int count = 0;

    while (*ptr != '\0')
    {
        if (*ptr == letter)
        {
            count++;
        }
        *ptr++;
    }

    // while (*ptr != '\0' && *ptr == letter)
    // {
    //     count++;                             ==> Error(Wrong Code)
    //     *ptr++;
    // }

    printf("The count of %c is %d", letter, count);
}

int main()
{
    char str[20];

    printf("Enter the string: ");
    gets(str);

    search(str, 'o');

    // while (*str != '\0')
    // {
    //     printf("%c", *str);
    //     *str++;
    // }

    return 0;
}