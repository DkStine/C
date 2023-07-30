#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("int.txt", "r");

    int i;

    for (int j = 1; j <= 4; j++)
    {
        fscanf(ptr, "%d", &i);
        printf("%d\n", i);
    }

    fclose(ptr);

    return 0;
}