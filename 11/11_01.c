#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the decimal no. %d: ", i + 1);
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The decimal no. %d is: %.3f\n", i, ptr[i]);
        // scanf("%f", &ptr[i]);
    }

    free(ptr);
    
    return 0;
}