#include <stdio.h>
#include <string.h>

int main(void)
{
    // Array of strings
    char *names[] = {
        "Kerem",
        "Arda",
        "Ugurcan",
        "Arda",
        "Ege"
    };

    int size = 5;
    char search[50];

    // Ask user for a name
    printf("Enter a name: ");
    scanf("%49s", search);

    // Linear search
    for (int i = 0; i < size; i++)
    {
        if (strcmp(names[i], search) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");

    return 0;
}