#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    int choice;

    while (1) {
        printf("\n--- String Manipulation Menu ---");
        printf("\n1. Reverse a String");
        printf("\n2. Convert to Uppercase");
        printf("\n3. Convert to Lowercase");
        printf("\n4. Find Length of String");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
         getchar(); 



void reverseString(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}


      
        if (choice >= 1 && choice <= 4) {
            printf("Enter the string: ");
            fgets(str, sizeof(str), stdin);
            str[strcspn(str, "\n")] = 0; // Remove trailing newline
        }

        switch (choice) {
            case 1:
                reverseString(str);
                printf("Reversed String: %s\n", str);
                break;

            case 2:
                for (int i = 0; str[i]; i++) str[i] = toupper(str[i]);
                printf("Uppercase String: %s\n", str);
                break;

            case 3:
                for (int i = 0; str[i]; i++) str[i] = tolower(str[i]);
                printf("Lowercase String: %s\n", str);
                break;

            case 4:
                printf("Length of the String: %zu\n", strlen(str));
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
