#include <stdio.h>
#include <math.h>

// Function to find the roots of the quadratic equation
void findRoots(double a, double b, double c) {
    double discriminant, root1, root2;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots are distinct real roots: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        // One double real root
        root1 = -b / (2 * a);
        printf("The root is a double real root: %.2f\n", root1);
    }
    else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;

    // Input coefficients of the quadratic equation
    printf("Enter the coefficients a, b, and c (for ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if 'a' is zero, because it would not be a quadratic equation
    if (a == 0) {
        printf("The equation is not quadratic because 'a' cannot be zero.\n");
    } else {
        // Call the function to find and display the roots
        findRoots(a, b, c);
    }

    return 0;
}
