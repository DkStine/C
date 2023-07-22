#include <stdio.h>

typedef struct complex_no
{
    int real;
    int imag;
} comp;

int main()
{
    comp cnum[5];

    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the real value: ");
        scanf("%d", &cnum[i].real);

        fflush(stdin);

        printf("Enter the imaginary value: ");
        scanf("%d", &cnum[i].imag);
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("The complex number is: %d + %di\n", cnum[i].real, cnum[i].imag);
    }

    return 0;
}