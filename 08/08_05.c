#include <stdio.h> //Doubt

void copy(char *source, int len)
{
    int i = 0;
    char target[len];

    while (i < len)
    {
        target[i] = source[i];
    }

    target[len] = '\0';

    printf("%s", target);
}

int main()
{
    char str[] = "Horse";
    int n = 5;

    copy(str, n);

    return 0;
}