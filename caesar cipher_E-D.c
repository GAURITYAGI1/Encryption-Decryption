#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100

// Function prototypes
void encrypt(char *text, int shift);
void decrypt(char *text, int shift);

int main() {
    char text[MAX_LEN];
    int shift;
    int choice;

    printf("Enter the text to encrypt/decrypt: ");
    fgets(text, MAX_LEN, stdin);
    // Remove newline character if present
    text[strcspn(text, "\n")] = '\0';

    printf("Enter the shift value (0-25): ");
    scanf("%d", &shift);

    // Ensure shift is within 0-25
    shift = shift % 26;

    printf("Choose an option:\n");
    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            encrypt(text, shift);
            printf("Encrypted text: %s\n", text);
            break;
        case 2:
            decrypt(text, shift);
            printf("Decrypted text: %s\n", text);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

// Function to encrypt text using Caesar Cipher
void encrypt(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            text[i] = (ch - base + shift) % 26 + base;
        }
    }
}

// Function to decrypt text using Caesar Cipher
void decrypt(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            text[i] = (ch - base - shift + 26) % 26 + base; // Add 26 to ensure positive result
        }
    }
}
