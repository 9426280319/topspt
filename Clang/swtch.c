#include <stdio.h>

int main() {
    char choice;
    int a, b;

    printf("\n Enter + for addition");
    printf("\n Enter - for subtraction");
    printf("\n Enter * for multiplication");
    printf("\n Enter / for division");

    printf("\n\n Enter your choice: ");
    scanf(" %c", &choice);  // ? Space added before %c to avoid newline issue

    printf("\n Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case '+':
            printf("\n Addition = %d", a + b);
            break;

        case '-':
            printf("\n Subtraction = %d", a - b);
            break;

        case '*':
            printf("\n Multiplication = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("\n Division = %d", a / b);
            else
                printf("\n Error! Division by zero.");
            break;

        default:
            printf("\n wrong choice!");
    }

    return 0;
}

