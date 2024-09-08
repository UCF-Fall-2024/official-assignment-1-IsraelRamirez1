#include <stdio.h>
#include <math.h>  

#define PI 3.14159


double calculate_distance() {
    double x1, y1, x2, y2, distance;
    
    
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);

    
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    
    printf("The distance between the two points is: %.2lf\n", distance);
    
    return distance;
}


double calculate_perimeter() {
    double distance = calculate_distance();
    double radius = distance / 2.0;
    double perimeter = 2 * PI * radius;
    
    // Output the perimeter in the expected format
    printf("The perimeter of the city encompassed by your request is: %.2lf\n", perimeter);
    
    return perimeter;
}


double calculate_area() {
    double distance = calculate_distance();
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);
    
    
    printf("The area of the city encompassed by your request is: %.2lf\n", area);
    
    return area;
}


double calculate_width() {
    double distance = calculate_distance();
    
    
    printf("The width of the city encompassed by your request is: %.2lf\n", distance);
    
    return distance;
}


double calculate_height() {
    double distance = calculate_distance();
    
    
    printf("The height of the city encompassed by your request is: %.2lf\n", distance);
    
    return distance;
}


int main(void) {
    calculate_perimeter();
    calculate_area();
    calculate_width();
    calculate_height();
    
    return 0;
}