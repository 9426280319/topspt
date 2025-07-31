
//find sum and average of given series in looping
#include <stdio.h>
main() {
    int n, i;
    int sum = 0;
    float avg;

    printf("Enter the limit of the series: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;   // Add each number to sum
    }

    avg = (float)sum / n;   // Typecast to float for correct average

    printf("\nSum of series from 1 to %d = %d\n", n, sum);
    printf("Average of series = %.2f\n", avg);

    return 0;
}

