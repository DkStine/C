#include <stdio.h>

void printmatrix(int arr[], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int marks[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter marks of Student %d in Subject %d: ", i, j);
            scanf("%d", &marks[i][j]);
        }
    }

    printmatrix(marks, 3, 2);

    return 0;
}