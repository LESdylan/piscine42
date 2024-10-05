#include <stdio.h>

// Define constants for states
#define IDLE 0
#define SELECTION 1
#define DISPENSE 2
#define CANCEL 3

// Define function prototypes for each state
void state_idle();
void state_selection();
void state_dispense();
void state_cancel();

// Declare a variable to track the current state
int current_state = IDLE;

// Track money inserted by the user
int money_inserted = 0;

// Define the transition table (function pointers)
void (*state_table[4])();

int main() {
    // Initialize the state table with function pointers
    state_table[IDLE] = state_idle;
    state_table[SELECTION] = state_selection;
    state_table[DISPENSE] = state_dispense;
    state_table[CANCEL] = state_cancel;

    // Main loop to handle the vending machine states
    while (1) {
        // Call the function for the current state
        state_table[current_state]();
    }

    return 0;
}

// State function: IDLE
void state_idle() {
    int input;
    printf("IDLE: Insert money (1 to insert, 0 to quit): ");
    scanf("%d", &input);
    
    if (input == 1) {
        printf("How much money did you insert? ");
        scanf("%d", &money_inserted);
        
        if (money_inserted > 0) {
            current_state = SELECTION;  // Transition to SELECTION state
        } else {
            printf("No money inserted, returning to IDLE.\n");
        }
    } else {
        current_state = CANCEL;  // Handle quitting
    }
}

// State function: SELECTION
void state_selection() {
    int choice;
    printf("SELECTION: Choose a product (1 for $5, 2 for $10, 0 to cancel): ");
    scanf("%d", &choice);
    
    if (choice == 0) {
        current_state = CANCEL;  // Cancel the transaction
    } else if ((choice == 1 && money_inserted >= 5) || (choice == 2 && money_inserted >= 10)) {
        current_state = DISPENSE;  // Transition to DISPENSE state
    } else {
        printf("Not enough money! Returning to SELECTION.\n");
    }
}

// State function: DISPENSE
void state_dispense() {
    printf("DISPENSE: Dispensing product...\n");
    money_inserted = 0;  // Reset money after dispensing
    current_state = IDLE;  // Go back to IDLE after dispensing
}

// State function: CANCEL
void state_cancel() {
    printf("CANCEL: Transaction canceled. Returning money: $%d\n", money_inserted);
    money_inserted = 0;  // Reset money after cancellation
    current_state = IDLE;  // Go back to IDLE
}

