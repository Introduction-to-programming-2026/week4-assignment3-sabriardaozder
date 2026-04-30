#include <stdio.h>

int main(void)
{
    int n;

    // Ask until user enters a valid positive integer
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    while (n < 1);

    // Print half-pyramid
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}