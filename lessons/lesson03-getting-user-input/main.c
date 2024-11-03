#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, 100, stdin);

    int newlineIndex = strlen(name) - 1;
    name[newlineIndex] = '\0'; // remove newline character

    printf("Length of name: %ld\n", strlen(name));
    // validate name size 
    if (strlen(name) < 1)
    {
        printf("Name is empty. Exiting...\n");
        return 1;
    }
    printf("Enter your age: ");
    scanf("%d", &age);
    // validate age
    if (age < 0 || age > 110)
    {
        printf("Age is invalid. Exiting...\n");
        return 1;
    }

    printf("Hello, %s! You are %d years old.\n", name, age);
}