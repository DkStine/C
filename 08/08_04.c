#include <stdio.h>

void slice(char *ptr)
{
    int m, n;

    printf("Enter start: ");
    scanf("%d", &m);

    fflush(stdin);

    printf("Enter stop: ");
    scanf("%d", &n);

    for (int i = m - 1; i < n; i++)
    {
        printf("%c", ptr[i]);
    }   
}

int main()
{
    char *str = "elephant";

    slice(str);

    return 0;
}