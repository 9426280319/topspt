
// a series of numbers is the sum of the two preceding ones,
//usually starting with 0 and 1. the sequence begins 0,1,1,2,3,5,8,13 and so on.

#include<stdio.h>

int main() {
    int x1 = 0, x2 = 1, ans, i;
    
    printf("%d\t%d", x1, x2); 
    
    for (i = 1; i < 100; i++) {  
        ans = x1 + x2;
        printf("\t%d", ans);
        x1 = x2;
        x2 = ans;
    }
    
    return 0;
}

