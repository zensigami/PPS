#include <stdio.h>

int main() {
    float a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // 1. Handling Equality Messages
    if (a == b && b == c) {
        printf("All numbers are equal.\n");
    } 
    else if (a == b || b == c || a == c) {
        printf("Any two numbers are equal.\n");
    }

    // 2. Finding Maximum using Nested Ternary Operator
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The maximum number is: %.2f\n", max);

    return 0;
}
