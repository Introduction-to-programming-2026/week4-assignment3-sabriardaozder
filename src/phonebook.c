#include <stdio.h>
#include <string.h>

#define SIZE 5

// 1. Struct definition
typedef struct
{
    char name[50];
    char phone[20];
}
Person;

int main(void)
{
    // 2. Array of persons
    Person people[SIZE] = {
        {"Ali", "12345"},
        {"Ayse", "67890"},
        {"Mehmet", "11111"},
        {"Zeynep", "22222"},
        {"Veli", "33333"}
    };

    char search[50];

    // 3. Ask user for a name
    printf("Enter name: ");
    scanf("%49s", search);

    // 4. Search
    for (int i = 0; i < SIZE; i++)
    {
        if (strcmp(people[i].name, search) == 0)
        {
            printf("Phone: %s\n", people[i].phone);
            return 0;
        }
    }

    // 5. Not found
    printf("Not found\n");

    return 0;
}