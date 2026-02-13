#include <stdio.h>

int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // Evaluates to 1 (true) if c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // Evaluates to 1 (true) if c is an uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // Show error message if c is not an alphabet
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (lowercase_vowel || uppercase_vowel)
            printf("%c is a vowel.\n", c);
        else
            printf("%c is a consonant.\n", c);
    } else {
        printf("Error! Please enter an alphabetic character.\n");
    }

    return 0;
}
