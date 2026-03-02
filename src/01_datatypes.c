#include <stdio.h>

/*
TASK 1: Data Types
*/

int main(void) {
    // TODO 1: Print sizes
    printf("=== Sizes of Data Types (bytes) ===\n");

    printf("int: %zu\n", sizeof(int));
    printf("long: %zu\n", sizeof(long));
    printf("long long: %zu\n", sizeof(long long));
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("char: %zu\n", sizeof(char));

    // TODO 2: Read input from user
    int age = 0;
    double height = 0.0;
    char firstLetter = '?';

    printf("\nEnter your age: ");
    scanf("%d", &age);

    printf("Enter your height in meters (e.g., 1.72): ");
    scanf("%lf", &height);

    printf("Enter the first letter of your name: ");
    scanf(" %c", &firstLetter);   // space önemli

    // TODO 3: Print summary
    printf("\n=== Summary ===\n");
    printf("You are %d years old, %.2f meters tall, and your name starts with '%c'.\n",
           age, height, firstLetter);

    return 0;
}