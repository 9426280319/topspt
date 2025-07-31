#include <stdio.h>

// Without return type, without parameter
void display() {
    printf("\n hello world");
}

// Without return type, with parameters
void add(int a, int b) {
    int c;
    c = a + b;
    printf("\n addition of %d and %d = %d", a, b, c);
}

// With return type, with parameter
int square(int num) {
    int sq;
    sq = num * num;
    return sq;
}

// With return type, without parameter
float areacircle() {
    int r;
    float area;
    printf("\n enter radius: ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    return area;
}

int main() {
    display();                             // Call to display()
    add(100, 200);                         // Call to add()
    printf("\n square = %d", square(12));  // Call to square()
    printf("\n area of circle = %f", areacircle()); // Call to areacircle()
    return 0;
}

