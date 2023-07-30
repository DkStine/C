#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("multitable.txt", "w");

    int n, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (i <= 10)
    {
        fprintf(ptr, "%d x %d = %d\n", n, i, n * i);
        i++;
    }

    fclose(ptr);

    return 0;
}