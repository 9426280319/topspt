//write a program generate a number of series of according to user enter your choise if press 1 forward loop. else if press 2 than reverse loop. else if wrong choise. in c

#include <stdio.h>

main() {
    int choice, num, i;

    printf("Enter your choice:\num");
    printf("1. Forward loop\num");
    printf("2. Reverse loop\num");
    scanf("%d", &choice);

    printf("Enter how many numbers you want in the series: ");
    scanf("%d", &num);

    if (choice == 1) {
        printf("\nForward series:\num");
        for (i = 1; i <= num; i++) {
            printf("%d ", i);
        }
    } 
    else if (choice == 2) {
        printf("\nReverse series:\n");
        for (i = num; i >= 1; i--) {
            printf("%d ", i);
        }
    } 
    else {
        printf("\n Wrong choice entered!\n");
    }

    return 0;
}

