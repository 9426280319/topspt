#include <stdio.h>

int main() {
    int x, y;
    printf("\nEnter the value of x and y: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("\nFirst quadrant");
    }
    else if (x < 0 && y < 0) {
        printf("\nSecond quadrant");
    }

    return 0;
}

