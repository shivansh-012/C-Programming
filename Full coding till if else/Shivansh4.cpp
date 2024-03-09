#include <stdio.h>

int main() {
    double wavelength, speed, frequency;
    printf("Enter wavelength (m): "); 
	scanf("%lf", &wavelength);
    printf("Enter wave speed (m/s): "); 
	scanf("%lf", &speed);
    frequency = speed / wavelength;
    printf("Frequency (Hz): %.2f\n", frequency);
    return 0;
}

