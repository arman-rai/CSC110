#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1; // Circle 1
    double x2, y2, r2; // Circle 2

    // Input data for Circle 1
    printf("Enter coordinates (x y) and radius of Circle 1: ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);

    // Input data for Circle 2
    printf("Enter coordinates (x y) and radius of Circle 2: ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    // Find the maximum radius
    double maxRadius;
    if (r1 > r2) {
        maxRadius = r1;
    } else {
        maxRadius = r2;
    }

    // Calculate the distance between the centers of the circles using distance formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Calculate the radius of the smallest gherne circle
    double gherneRadius = maxRadius + distance;

    // Calculate the coordinates of the center of the bounding circle
    // Maile chai average of centers of the circles leko for simplicity
    double gherneX = (r1 * x2 + r2 * x1) / (r1 + r2);
    double gherneY = (r1 * y2 + r2 * y1) / (r1 + r2);

    // Print the result
    printf("\nRadius and coordinates of the smallest enclosing circle:\n");
    printf("Radius: %.2lf\n", gherneRadius);
    printf("Center coordinates: (%.2lf, %.2lf)\n", gherneX, gherneY);

    return 0;
}
