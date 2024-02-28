#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#define PCI_STATUS_REGISTER 0x00
#define PCI_INTERRUPT_STATUS_REGISTER 0x04
#define PCI_INTERRUPT_VECTOR 0xAB
unsigned int read_pci_register(unsigned int offset) {
    if (offset == PCI_STATUS_REGISTER) {
        return 0; 
    } else if (offset == PCI_INTERRUPT_STATUS_REGISTER) {
        return 0;  
    }
    return 0xFFFFFFFF;
}
void handle_pci_interrupt() {
    printf("CPU handling PCI interrupt (Vector: 0x%X)\n", PCI_INTERRUPT_VECTOR);
    sleep(1);
}
int main() {
    printf("Simulating PCI interrupts\n");
    for (int i = 0; i < 5; ++i) {
        printf("Simulating PCI device interrupt (Iteration: %d)\n", i + 1);
        unsigned int interruptStatus = read_pci_register(PCI_INTERRUPT_STATUS_REGISTER);
        if (interruptStatus != 0) {
            handle_pci_interrupt();
            printf("Clearing PCI interrupt\n");
        } else {
            printf("No PCI interrupt\n");
        }
        sleep(2);
    }

    return 0;
}

