#include <stdio.h>

void change(int *i)
{
    *i *= 10;
}

int main()
{
    int num = 5, *j = &num;

    // printf("Enter the number: ");
    // scanf("%d", &num);

    printf("The number before function: %d\n", num);
    change(j);

    printf("The number after function: %d\n", *j);


    return 0;
}