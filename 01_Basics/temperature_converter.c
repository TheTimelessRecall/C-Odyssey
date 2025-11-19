#include <stdio.h>

int main() {
    int main_choice, sub_choice;
    float celsius, fahrenheit, kelvin;

    printf("\t\t\t\t\tWelcome to Temperature Conversion!\n\n");
    printf(
        "Temperature conversion formulas help you change temperature values from one unit to "
        "another.\n\n");

    printf("Choose the conversion type:\n");
    printf("1. Celsius <-> Kelvin\n");
    printf("2. Fahrenheit <-> Kelvin\n");
    printf("3. Celsius <-> Fahrenheit\n\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &main_choice);

    if (main_choice == 1) {
        printf("\n1. Convert Celsius to Kelvin\n");
        printf("2. Convert Kelvin to Celsius\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &sub_choice);

        if (sub_choice == 1) {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            kelvin = celsius + 273.15;
            printf("Temperature in Kelvin: %.1f\n", kelvin);
        } else if (sub_choice == 2) {
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            celsius = kelvin - 273.15;
            printf("Temperature in Celsius: %.1f\n", celsius);
        } else {
            printf("Invalid sub-choice. Please enter 1 or 2.\n");
        }
    } else if (main_choice == 2) {
        printf("\n1. Convert Fahrenheit to Kelvin\n");
        printf("2. Convert Kelvin to Fahrenheit\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &sub_choice);

        if (sub_choice == 1) {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            // Convert Fahrenheit to Celsius first, then to Kelvin
            celsius = (fahrenheit - 32) * (5.0 / 9.0);
            kelvin = celsius + 273.15;
            printf("Temperature in Kelvin: %.1f\n", kelvin);
        } else if (sub_choice == 2) {
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &kelvin);
            // Convert Kelvin to Celsius first, then to Fahrenheit
            celsius = kelvin - 273.15;
            fahrenheit = (celsius * (9.0 / 5.0)) + 32;
            printf("Temperature in Fahrenheit: %.1f\n", fahrenheit);
        } else {
            printf("Invalid sub-choice. Please enter 1 or 2.\n");
        }
    } else if (main_choice == 3) {
        printf("\n1. Convert Celsius to Fahrenheit\n");
        printf("2. Convert Fahrenheit to Celsius\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &sub_choice);

        if (sub_choice == 1) {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * (9.0 / 5.0)) + 32;
            printf("Temperature in Fahrenheit: %.1f\n", fahrenheit);
        } else if (sub_choice == 2) {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32) * (5.0 / 9.0);
            printf("Temperature in Celsius: %.1f\n", celsius);
        } else {
            printf("Invalid sub-choice. Please enter 1 or 2.\n");
        }
    } else {
        printf("Invalid main choice. Please enter 1, 2, or 3.\n");
    }

    return 0;
}
