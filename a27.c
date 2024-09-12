#include <stdio.h>
#include <math.h>

int main() {
float a, b, c;
float d, r_1, r_2, real, imag;
printf("Enter coefficients a, b and c: ");
scanf("%f %f %f", &a, &b, &c);
d = b*b - 4*a*c;
switch ((d > 0) - (d < 0)) {
        case 1: 
            
            r_1 = (-b + sqrt(d)) / (2*a);
            r_2 = (-b - sqrt(d )) / (2*a);
            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", r_1);
            printf("Root 2 = %.2f\n", r_2);
            break;

        case 2: 
            
            r_1 = r_2 = -b / (2*a);
            printf("Roots are real and equal.\n");
            printf("Root 1 = Root 2 = %.2f\n", r_1);
            break;

        case 3: 
            
            real = -b / (2*a);
            imag = sqrt(-d) / (2*a);
            printf("Roots are complex and different.\n");
            printf("Root 1 = %.2f + %.2fi\n", real, imag);
            printf("Root 2 = %.2f - %.2fi\n", real, imag);
            break;

        default:
            printf("Invalid input.\n");
            break;
    }

    return 0;
}

	
