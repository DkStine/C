#include <stdio.h>

int lenstr(char *ptr)
{
    int n = 0;

    for (ptr; *ptr != '\0'; ptr++)
    {
        n += 1;
    }
    
    return n;
}

int main()
{
    char *alpha = "string";

    printf("%d", lenstr(alpha));

    return 0;
}