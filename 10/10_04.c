#include <stdio.h>

int main()
{
    FILE *fptr, *fptrcopy;
    fptr = fopen("Gods.txt", "r");
    fptrcopy = fopen("Gods_copy.txt", "w");

    char c = fgetc(fptr);

    while (c != EOF)
    {
        fputc(c, fptrcopy);
        c = fgetc(fptr);
    }

    fclose(fptr);
    fclose(fptrcopy);

    return 0;
}