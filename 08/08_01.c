#include <stdio.h>

int main()
{
    char s[] = {'D', 'e', 'e', 'p', 'a', 'k', '\0'};
    char *ptr = s;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    printf("%s\n", s);

    char *pt = "Deepak";
    printf("%s\n", pt);

    return 0;
}