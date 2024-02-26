#include <stdio.h>

int main() {
    double doublePrecisionNumber = 3.14; // Example double-precision floating-point number

    printf("Double Precision Number: %lf\n", doublePrecisionNumber);

    // Accessing individual components of double-precision representation
    long long *binaryRepresentation = (long long*)&doublePrecisionNumber;

    printf("Double Precision Representation in Binary: ");
    int i;
    for (i = 63; i >= 0; i--) {
        printf("%lld", (*binaryRepresentation >> i) & 1);
        if (i % 8 == 0) {
            printf(" ");
        }
    }

    return 0;
}

