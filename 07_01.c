#include <stdio.h>

int main()
{
    int marks[5], i = 0;

    while (i < 5)
    {
        printf("Enter the marks of student %d: \n", i + 1);
        scanf("%d", &marks[i]);
        i++;      
    }

    i = 0;

    while (i < 5)
    {
        printf("The marks of student %d: %d \n", i + 1, marks[i]);
        i++;
    }

    return 0;
}