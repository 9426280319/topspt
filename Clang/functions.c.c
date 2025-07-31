#include <stdio.h>
/*
returntype.function-name(p1,p2){
            //block
        }
*/        
void display();  //declartion              
void add(int a, int b);        
int square(int num);           

int main() {                    
    display();          
    add(100, 990);
    add(1, 2);

    int ans = square(19);       
    printf("\n ans = %d", ans);
    printf("\n square of 12 = %d", square(12)); 
    return 0;                  
}

// Function definitions
void display() {
    printf("\n hello world");
}

void add(int a, int b) {
    int c;
    c = a + b;
    printf("\n addition of %d and %d = %d", a, b, c);  
}

int square(int num) {
    int sq;
    sq = num * num;
    return sq;
}

