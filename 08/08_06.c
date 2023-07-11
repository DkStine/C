#include <stdio.h>

void encrypt(char *char_ptr)
{
    char *ptr = char_ptr;

    while (*ptr != '\0')
    {
        *ptr += 1;
        *ptr++;
    }
}

void decrypt(char *char_ptr)
{
    char *ptr = char_ptr;

    while (*ptr != '\0')
    {
        *ptr -= 1;
        *ptr++;
    }
}

int main()
{
    char pass[20];

    printf("Input the string(Limit is 20 letters): ");
    gets(pass);

    encrypt(pass);
    printf("The encrypted statement is: %s\n", pass);

    decrypt(pass);
    printf("The decrypted statement is: %s\n", pass);

    return 0;
}