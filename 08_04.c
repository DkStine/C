#include <stdio.h>

void reverse(int *arr, int length)
{
    int temp;

    for (int i = 0; i < (length/2); i++)
    {
        // arr[i] <=> arr[length - i - 1]
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp; 
    }
}

int main()
{
    int arr[4] = {56, 78, 12, 42};

    reverse(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }    

    return 0;
}