#include <stdio.h>
#include <math.h>  // to add math functions

#define PI 3.14159

// to calculate the distance between two points
double calculate_distance() {
    double x1, y1, x2, y2, distance;
    
    // Asking input from user
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    // calculating the distance between the points
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("The distance between the two points is: %.2lf\n", distance);
    
    return distance;
}

// to calculate the perimeter of the circle (diameter)
double calculate_perimeter() {
    double distance = calculate_distance();
    double radius = distance / 2.0;
    double perimeter = 2 * PI * radius;
    
    printf("The perimeter of the city encompassed by your request is: %.2lf\n", perimeter);
    
    return perimeter;
}

// to calculate the area of the circle (diameter)
double calculate_area() {
    double distance = calculate_distance();
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);
    
    printf("The area of the city encompassed by your request is: %.2lf\n", area);
    
    return area;
}

// to calculate the width of the city (diameter)
double calculate_width() {
    double distance = calculate_distance();
    
    printf("The width of the city encompassed by your request is: %.2lf\n", distance);
    
    return distance;
}

// to calculate the height of the city (diameter)
double calculate_height() {
    double distance = calculate_distance();
    
    printf("The height of the city encompassed by your request is: %.2lf\n", distance);
    
    return distance;
}

// Main function
int main(void) {
    calculate_perimeter();
    calculate_area();
    calculate_width();
    calculate_height();
    
    return 0;
}