#include <stdio.h>

void calculator();

int main() {
    calculator();
    return 0;
}

void calculator() {
    int a, b, choice;

    while (1) {
        printf("\nChoose operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting program.\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (choice) {
            case 1:
                printf("Result: %d\n", a + b);
                break;
            case 2:
                printf("Result: %d\n", a - b);
                break;
            case 3:
                printf("Result: %d\n", a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Cannot divide by zero.\n");
                } else {
                    printf("Result: %d\n", a / b);
                }
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    }
}
