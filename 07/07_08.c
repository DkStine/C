#include <stdio.h>

int main()
{
    int multi[3][10], n1 = 2, n2 = 7, n3 = 9;

    for (int i = 0; i <= 9; i++)
    {
        multi[0][i] = n1 * (i + 1);
    }
    for (int i = 0; i <= 9; i++)
    {
        multi[1][i] = n2 * (i + 1);
    }
    for (int i = 0; i <= 9; i++)
    {
        multi[2][i] = n3 * (i + 1);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 9)
            {
                printf("%d", multi[i][j]);
            }
            else
            {
                printf("%d, ", multi[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}