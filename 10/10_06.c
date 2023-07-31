#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("double.txt", "r");

    int a;
    fscanf(ptr, "%d", &a);

    printf("%d", a);

    fclose(ptr);

    ptr = fopen("double.txt", "w");

    fprintf(ptr, "%d", 2 * a);
    fclose(ptr);

    return 0;
}