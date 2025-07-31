#include <stdio.h>

main()
{
    float side, length, breadth, square_area, rectangle_area;

    // Input for square
    printf("Enter the side of the square: ");
    scanf("%f", &side);

    // Calculate square area
    square_area = side * side;
    printf("Area of the square = %.2f\n", square_area);

    // Input for rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate rectangle area
    rectangle_area = length * breadth;
    printf("Area of the rectangle = %.2f\n", rectangle_area);

    return 0;
}

