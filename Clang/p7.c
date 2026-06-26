#include <stdio.h>

main() {
    int n = 7; // Always odd number
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            if (i == n / 2 || j == n / 2 || // middle row or column
                (i == 0 && j >= n / 2) ||   // top right
                (i == n - 1 && j <= n / 2) || // bottom left
                (j == 0 && i <= n / 2) ||   // top left
                (j == n - 1 && i >= n / 2)) // bottom right
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

