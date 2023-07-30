#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("Harry.txt", "r");

    if (ptr == NULL)
    {
        printf("file doesn't exist\n");
        ptr = fopen("Harry.txt", "w");

        fprintf(ptr, "My name is Deepak Kumar%d", 24022005);
        fclose(ptr);
    }
    else
    {
        printf("file exists\n");
        char txt;
        txt = fgetc(ptr);

        while (txt != EOF)
        {
            printf("%c", txt);
            txt = fgetc(ptr);
        }

        fclose(ptr);
    }

    return 0;
}