
//print odd number of given series in looping

#include <stdio.h>

main() {
    int n, i;

    printf("Enter the limit of the series: ");
    scanf("%d", &n);

    printf("\nOdd numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {     // Odd check
            printf("%d ", i);
        }
    }

    return 0;
}

