#include <stdio.h>

// Recursive function to print n hashes
void print_row(int n)
{
    if (n <= 0)
    {
        return;
    }

    print_row(n - 1);
    printf("#");
}

void print_pyramid(int n)
{
    if (n <= 0)
    {
        return;
    }

    print_pyramid(n - 1);
    print_row(n);
    printf("\n");
}

int main(void)
{
    int n;

    // Input validation
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    while (n < 1);

    // Print pyramid using recursion
    print_pyramid(n);

    return 0;
}