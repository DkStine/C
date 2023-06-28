#include <stdio.h>

void pos(int *arr, int length)
{
    int pos_int = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > 0)
        {
            pos_int++;
        }
        else
        {
            continue;
        }
    }
    printf("The number of positive integers is %d", pos_int);
}

int main()
{
    int int_array[] = {45, -78, 30, -41, -23};

    pos(int_array, 5);

    return 0;
}