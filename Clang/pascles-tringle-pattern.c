#include <stdio.h>

main() {
    int i, j, num = 1;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            printf("  ");
        }
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                num = 1;
            else
                num = num * (i - j + 1) / j;
            printf("%4d", num);
        }
        printf("\n");
    }
}

