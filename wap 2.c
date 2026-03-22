#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    // Input from user
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest Calculation
    simple_interest = (principal * rate * time) / 100;

    // Compound Interest Calculation
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;

    // Output results
    printf("\nSimple Interest = %.2f", simple_interest);
    printf("\nCompound Interest = %.2f\n", compound_interest);

    return 0;
}
