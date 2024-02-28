#include <stdio.h>
// Function to perform addition
int add(int a, int b) {
 return a + b;
}
// Function to perform subtraction
int subtract(int a, int b) {
 return a - b;
}
int main() {
 int a = 5;
 int b = 10;
 int c, d;
 // Superscalar processing:
 // Execute multiple instructions in parallel if possible
 // Stage 1: Instruction Fetch
 // Instructions are fetched simultaneously
// Stage 2: Instruction Decode
 // Instructions are decoded in parallel
 // Stage 3: Execution
 // Instructions are executed in parallel
 c = add(a, b);
 d = subtract(a, b);
 // Stage 4: Writeback
 // Results are written back to registers
 // Print the results
 printf("Result of addition: %d\n", c);
 printf("Result of subtraction: %d\n", d);
 return 0;
}
