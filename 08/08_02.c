#include <stdio.h>
#include <string.h>

int main()
{
    // char str_1[10];
    // char *ptr = str_1;

    // printf("This is for using percent c: ");
    // scanf("%c", str_1);

    // fflush(stdin);

    // printf("This is for using percent s: ");
    // scanf("%s", ptr);

    // printf("%c", ptr);

    char *ptr_1 = "far", *ptr_2 = "far";

    printf("%d", strcmp(ptr_1, ptr_2));

    return 0;
}