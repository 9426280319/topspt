//wap generate a number of series(-) according to use do input
#include <stdio.h>
 main() {
    int num, i = -1;

    printf("Enter how many numbers you want in the series: ");
    scanf("%d", &num);

    printf("\nGenerated Series:\n"); // do-while ; 
    do {
        printf("%d ", i);
        i--;
    } while (i >= num);

    return 0;
}
