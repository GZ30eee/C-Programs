#include <stdio.h>

void convert_temperature(float temp, char scale) {
    if (scale == 'C' || scale == 'c') {
        printf("Temperature in Fahrenheit: %.2f\n", (temp * 9/5) + 32);
    } else if (scale == 'F' || scale == 'f') {
        printf("Temperature in Celsius: %.2f\n", (temp - 32) * 5/9);
    } else {
        printf("Invalid scale. Please use 'C' or 'F'.\n");
    }
}

int main() {
    float temp;
    char scale;

    printf("Enter temperature and scale (C/F): ");
    scanf("%f %c", &temp, &scale);

    convert_temperature(temp, scale);

    return 0;
}
