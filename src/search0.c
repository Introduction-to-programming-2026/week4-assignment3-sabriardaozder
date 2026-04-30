#include <stdio.h>

int main(void)
{
    // 1. Integer array
    int numbers[] = {10, 25, 7, 42, 99, 13, 56};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target;
    
    // 2. Ask user for a number
    printf("Enter a number: ");
    scanf("%d", &target);

    // 3. Linear search
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == target)
        {
            printf("Found\n");
            return 0;
        }
    }

    // 4. If not found
    printf("Not found\n");

    return 0;
}