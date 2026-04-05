
#include <stdio.h>
#include <stdlib.h>
int main() {
    int choice, num, result;

    while (1) {
        printf("\n--- Menu-Driven Application (Functions) ---");
        printf("\n1. Even or Odd (Arg, No Return)");
        printf("\n2. Positive or Negative (No Arg, No Return)");
        printf("\n3. Greatest of Three (No Arg, Return)");
        printf("\n4. Sum of Digits (Arg, Return)");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);


// 1. With Argument and With Return Type (Sum of Digits)
int sumOfDigits(int n) {
    int sum = 0;
    n = abs(n);
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// 2. With Argument and Without Return Type (Even or Odd)
void checkEvenOdd(int n) {
    if (n % 2 == 0)
        printf("%d is Even.\n", n);
    else
        printf("%d is Odd.\n", n);
}

// 3. Without Argument and With Return Type (Greatest of Three)
int getGreatest() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

// 4. Without Argument and Without Return Type (Positive or Negative)
void checkPositiveNegative() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) printf("%d is Positive.\n", n);
    else if (n < 0) printf("%d is Negative.\n", n);
    else printf("The number is Zero.\n");
}


        switch (choice) {
            case 1:
                printf("Enter an integer: ");
                scanf("%d", &num);
                checkEvenOdd(num); // Calling Type 2
                break;
            case 2:
                checkPositiveNegative(); // Calling Type 4
                break;
            case 3:
                result = getGreatest(); // Calling Type 3
                printf("The greatest number is: %d\n", result);
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = sumOfDigits(num); // Calling Type 1
                printf("Sum of digits: %d\n", result);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
