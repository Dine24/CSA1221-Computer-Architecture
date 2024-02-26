#include <stdio.h>
#include <math.h>

int hexadecimalToDecimal(char hex[]) {
    int decimalNumber = 0, hexDigit, base = 1, i = 0;

    // Iterate through the hexadecimal digits from right to left
    for (i = 0; hex[i] != '\0'; i++) {
        // Get the decimal value of the current hexadecimal digit
        if (hex[i] >= '0' && hex[i] <= '9') {
            hexDigit = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            hexDigit = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            hexDigit = hex[i] - 'a' + 10;
        } else {
            printf("Invalid hexadecimal digit: %c\n", hex[i]);
            return -1;  // Error: Invalid hexadecimal digit
        }

        // Update the decimal number
        decimalNumber = decimalNumber * 16 + hexDigit;
    }

    return decimalNumber;
}

int main() {
    char hex[20];
    int decimalNumber;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    decimalNumber = hexadecimalToDecimal(hex);

    if (decimalNumber != -1) {
        printf("Decimal equivalent: %d\n", decimalNumber);
    }

    return 0;
}

