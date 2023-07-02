#include <stdio.h>

int main()
{
    char str_1[10];
    char *ptr = str_1;

    printf("This is for using percent c: ");
    scanf("%c", str_1);

    fflush(stdin);

    printf("This is for using percent s: ");
    scanf("%s", ptr);

    printf("%c", ptr);

    return 0;
}