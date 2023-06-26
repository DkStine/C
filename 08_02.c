#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value: ");
        scanf("%d", &arr[i]);
    }

    int *ptr = &arr[0];

    printf("The first element is %d\n", *ptr);
    printf("The third element is %d\n", *(ptr+2));

    return 0;
}