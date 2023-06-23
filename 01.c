#include <stdio.h>
int fibonacci(int n) //function definition
{
    if (n == 0) //0, 1, 1, 2, 3, 5, 8, 13...
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n-2);
    }

}

int main()
{
    int term, num;

    printf("Note: Terms start from 0\nEnter the required term: ");
    scanf("%d", &term);

    num = fibonacci(term);

    printf("The term at %d is %d", term, num);

    return 0;
}