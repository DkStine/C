#include <stdio.h>

int main()
{
    int a = 7, b = 8, *ptr_1 = &a, *ptr_2 = &b; 
    // c = ptr_1, d = ptr_2, diff;

    printf("ptr: %u\n", ptr_1);
    ptr_1++;

    ptr_1 += 7;
    ptr_1 -= 5;

    printf("The difference is: %d", (int)(ptr_1 - ptr_2));

    return 0;
}