#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("employee.csv", "w");

    int n, i = 0;
    printf("Enter no. of employees: ");
    scanf("%d", &n);
    fflush(stdin);

    while (i < n)
    {
        char name[10];
        int sal;
        printf("Enter name: ");
        gets(name);
        fflush(stdin);
        printf("Enter salary: ");
        scanf("%d", &sal);
        fflush(stdin);
        fprintf(ptr, "%s, %d\n", name, sal);

        i++;
    }

    fclose(ptr);

    return 0;
}