#include <stdio.h>
#include <math.h>

int main()
{
    float number = 34.5678;
    int roundNumber = round(number);
    
    printf("The rounded off number is: %d\n", roundNumber);
    printf("The number upto two decimal places is: %.2f\n", number);

    return 0;
}