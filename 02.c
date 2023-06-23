#include <stdio.h>

int sum(int n)
{
    if (n == 0)
    {
        printf("Invalid input!");
        return 0;
    }
    else if (n == 1)
    {
        printf("The sum is %d", 1);
        return 1;
    }
    else
    {
        return sum(n) + sum(n-1);
    }
}

int main()
{
    int n, s;

    printf("Enter no. of terms: ");
    scanf("%d", &n);

    s = sum(n);

    printf("The sum is %d", s); //1 + 2 + 3 + 4 + 5 = 15

    return 0;
}