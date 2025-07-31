#include <stdio.h>

int main() {
    float cp, sp, amount;

    printf("Enter Cost Price (CP): ");
    scanf("%f", &cp);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sp);

    if (sp > cp) {
        amount = sp - cp;
        printf("Profit = %.2f\n", amount);
    }
    else if (cp > sp) {
        amount = cp - sp;
        printf("Loss = %.2f\n", amount);
    }
    else {
        printf("No Profit No Loss.\n");
    }

    return 0;
}

