#include <stdio.h>
#include <math.h>  


#define PI 3.14159


double calculateDistance() {
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


double calculatePerimeter() {
    double radius, perimeter;
    
    
    radius = calculateDistance() / 2;
    
    
    perimeter = 2 * PI * radius;
    
    
    printf("The perimeter of the circle is: %.2lf\n", perimeter);
    
    return perimeter;
}


double calculateArea() {
    double radius, area;
    
    
    radius = calculateDistance() / 2;
    
    
    area = PI * pow(radius, 2);
    
    
    printf("The area of the circle is: %.2lf\n", area);
    
    return area;
}


double calculateHeight() {
    double height;
    
    
    height = calculateDistance();
    
    
    printf("The height (diameter) of the circle is: %.2lf\n", height);
    
    return height;
}


double calculateWidth() {
    double width;
    
    
    width = calculateDistance();
    
    
    printf("The width (diameter) of the circle is: %.2lf\n", width);
    
    return width;
}


int main(void) {
    
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}