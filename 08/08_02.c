#include <stdio.h>

int main()
{
    char str_1[10];
    char *ptr = str_1;

    printf("This is for using percent c: ");
    scanf("%c", str_1);

    printf("This is for using percent s: ");
    scanf("%s", ptr);

    return 0;
}