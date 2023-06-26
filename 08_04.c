#include <stdio.h>

int reverse(int arr[], int length)
{
    int new_arr[length], *ptr = &new_arr[0];

    for (int i = length - 1; i >= 0; i--)
    {
        ptr = arr[i];
        ptr++;
    }

    return new_arr[length];
}

int main()
{
    int arr[4] = {56, 78, 12, 42};

    

    return 0;
}