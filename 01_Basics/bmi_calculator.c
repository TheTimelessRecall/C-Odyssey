#include <stdio.h>

int main() {
    float height, weight, bmi;

    printf("\t\t\t\tWelcome to the BMI Calculator!\n\n");
    printf(
        "Body Mass Index (BMI) is a calculation that estimates body fat based on your weight and "
        "height.\n\n");

    // Get user input for height and weight
    printf("Enter your height in meters (e.g., 1.75): ");
    scanf("%f", &height);

    printf("Enter your weight in kilograms (e.g., 70.5): ");
    scanf("%f", &weight);

    // Calculate BMI
    bmi = weight / (height * height);

    // Display BMI
    printf("\nYour BMI: %.1f\n", bmi);

    // Provide BMI category
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Category: Healthy Weight\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obesity\n");
    }

    return 0;
}
