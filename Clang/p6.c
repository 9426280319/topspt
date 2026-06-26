#include <stdio.h>

main() {
    int i, j;
    int n = 12;   

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {

            // swastik ke rules
            if (i == (n/2 + 1) || j == (n/2 + 1) ||       // middle row & column
                (i == 1 && j >= (n/2 + 1)) ||             // top row right side
                (i == n && j <= (n/2 + 1)) ||             // bottom row left side
                (j == 1 && i <= (n/2 + 1)) ||             // left column top side
                (j == n && i >= (n/2 + 1)))               // right column bottom side
            {
                printf("* ");
            } 
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

