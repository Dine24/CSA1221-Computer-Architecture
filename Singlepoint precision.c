#include <stdio.h>

int main() {
    float singlePrecisionNumber = 3.14f; // Example single-precision floating-point number

    printf("Single Precision Number: %f\n", singlePrecisionNumber);

    // Accessing individual components of single-precision representation
    int *binaryRepresentation = (int*)&singlePrecisionNumber;

    printf("Single Precision Representation in Binary: ");
    int i;
    for (i = 31; i >= 0; i--) {
        printf("%d", (*binaryRepresentation >> i) & 1);
        if (i % 8 == 0) {
            printf(" ");
        }
    }

    return 0;
}

