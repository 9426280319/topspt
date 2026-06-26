#include<stdio.h>
 main() {
    int a[5], i;
    for (i = 0; i <= 4; i++) {
        printf("\nEnter array element a[%d]: ", i);
        scanf("%d", &a[i]); 
    }
    
    
    for (i = 0; i <= 4; i++) {
        printf("\na[%d] = %d and address = %p", i, a[i], &a[i]); 
    }
}

