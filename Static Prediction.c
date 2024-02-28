#include <stdio.h>
#define TAKEN 1
#define NOT_TAKEN 0
int static_prediction(int instruction_address) {
 if (instruction_address % 2 == 0) {
 return TAKEN;
 } else {
 return NOT_TAKEN;
 }
}
int main() {
 int instruction_addresses[] = {100, 101, 102, 103, 104};
 int num_instructions = sizeof(instruction_addresses) / sizeof(instruction_addresses[0]);
 printf("Static prediction results:\n");
 int i;
 for (i = 0; i < num_instructions; i++) {
 int prediction = static_prediction(instruction_addresses[i]);
 printf("Instruction at address %d: Prediction = %s\n", instruction_addresses[i],
 prediction == TAKEN ? "Taken" : "Not Taken");
 }
 return 0;
}

