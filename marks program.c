#include <stdio.h>

int main() {
    float marks[5], sum = 0, percentage;
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    
    percentage = sum / 5;

    printf("\nTotal Marks = %.2f", sum);
    printf("\nPercentage = %.2f%%", percentage);

    return 0;
}
