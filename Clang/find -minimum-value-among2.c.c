#include <stdio.h>

int main() {
    int a, b, min;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Using conditional operator to find minimum
    min = (a < b) ? a : b;

    printf("The minimum value is: %d\n", min);

    return 0;
}

