#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // If the last bit is 1, the result is true (Odd)
    if (num & 1) {
        printf("%d is an odd number.", num);
    }
    else {
        printf("%d is an even number.", num);
    }

    return 0;
}
