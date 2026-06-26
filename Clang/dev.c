#include<stdio.h>
int main() {
    int i, j;

    for (i = 0; i < 7; i++) {     // 7 rows height

        // Letter D
        for (j = 0; j < 5; j++) {
            if (j == 0 || (i == 0 && j < 4) || (i == 6 && j < 4) || (j == 4 && i>0 && i<6))
                printf("*");
            else
                printf(" ");
        }
        printf("  "); // space between letters

        // Letter E
        for (j = 0; j < 5; j++) {
            if (j == 0 || i == 0 || i == 3 || i == 6)
                printf("*");
            else
                printf(" ");
        }
        printf("  "); // space between letters

        // Letter V
        for (j = 0; j < 5; j++) {
            if ((j == 0 && i < 5) || (j == 4 && i < 5) || (i == 5 && (j == 1 || j == 3)) || (i == 6 && j == 2))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }
    return 0;
}

