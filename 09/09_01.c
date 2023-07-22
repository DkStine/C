#include <stdio.h>

struct vector
{
    int abscissa;
    int ordinate;
};

void vector_sum(struct vector *ptr1, struct vector *ptr2)
{
    int x_sum, y_sum;

    x_sum = (ptr1->abscissa) + (ptr2->abscissa);
    y_sum = (ptr1->ordinate) + (ptr2->ordinate);

    printf("The sum vector is: %di + %dj", x_sum, y_sum);
}

int main()
{
    struct vector v1, v2;

    (&v1)->abscissa = 5;
    (&v1)->ordinate = -3;
    (&v2)->abscissa = -7;
    (&v2)->ordinate = 4;

    vector_sum(&v1, &v2);

    return 0;
}