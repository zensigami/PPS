#include <stdio.h>


long long fact_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact_recursive(n - 1);
}


long long fact_iterative(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, choice;

    printf("Enter a non-negative number: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input!\n");
        return 1;
    }

    printf("Choose method:\n1. Iterative\n2. Recursive\nEnter choice: ");
    scanf("%d", &choice);

    if (n > 20) {  
        printf("Number too large! Try <= 20\n");
        return 1;
    }

    if (choice == 1)
        printf("Factorial = %lld\n", fact_iterative(n));
    else if (choice == 2)
        printf("Factorial = %lld\n", fact_recursive(n));
    else
        printf("Invalid choice!\n");

    return 0;
}
