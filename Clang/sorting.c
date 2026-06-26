#include<stdio.h>
main() {
    int a[5], i, j, temp;

    for(i = 0; i <= 4; i++) {
        printf("\nEnter array element a[%d]: ", i);
        scanf("%d", &a[i]);   
    }

    for (i = 0; i <= 4; i++) {
        for (j = i + 1; j <= 4; j++) {
            if (a[i] > a[j]) {    
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i <= 4; i++) {
        printf("\na[%d] = %d", i, a[i]);
    }
}

