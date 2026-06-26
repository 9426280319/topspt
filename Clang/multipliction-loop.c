#include<stdio.h>

main() {
    int num, i;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    
    for (i = 1; i <= 100; i++) {
        printf("\n %d * %d = %d", num, i, num * i);
    }
    
    return 0;
}

