//Wind chill 

#include <stdio.h>
#include <math.h>

int main() {

        double t, v, w;
        
        printf("\tWind chill index calculator\n");
        
        // Input data for calculation
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &t);

        printf("Enter wind speed in (miles/hour): ");
        scanf("%lf", &v);

        // Calculation using pow() 
        w = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

        printf("\nThe wind chill index is: %lf", w);

return 0;
}
