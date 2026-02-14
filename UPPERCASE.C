#include <stdio.h>
#include <ctype.h> // Essential for character classification functions

int main() {
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);

    // isupper() checks if the character is between 'A' and 'Z'
    if (isupper(ch)) {
        printf("'%c' is an UPPERCASE letter.\n", ch);
    } 
    // islower() checks if the character is between 'a' and 'z'
    else if (islower(ch)) {
        printf("'%c' is a lowercase letter.\n", ch);
    } 
    // isdigit() checks if the character is between '0' and '9'
    else if (isdigit(ch)) {
        printf("'%c' is a number (digit).\n", ch);
    } 
    // If it's none of the above, it's a special symbol or punctuation
    else {
        printf("'%c' is a special symbol.\n", ch);
    }

    return 0;
}
