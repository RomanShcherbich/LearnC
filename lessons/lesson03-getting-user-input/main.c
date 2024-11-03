#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);
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