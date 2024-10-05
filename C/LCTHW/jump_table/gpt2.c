#include <stdio.h>

// Define state constants
#define RED 0
#define GREEN 1
#define YELLOW 2

// Define function prototypes for state actions
void state_red();
void state_green();
void state_yellow();

// Define the jump table (array of function pointers)
void (*state_table[3])();

int main() {
    // Initialize the state table with function pointers
    state_table[RED] = state_red;
    state_table[GREEN] = state_green;
    state_table[YELLOW] = state_yellow;

    int current_state = RED;  // Start at the RED light
    char input;               // User input to move to the next state

    while (1) {
        // Call the function for the current state
        state_table[current_state]();

        // Get user input for state transition
        printf("Enter 'n' for next state or 'q' to quit: ");
        scanf(" %c", &input);

        if (input == 'q') {
            break;  // Exit the loop if the user wants to quit
        }

        // Update the state: RED -> GREEN -> YELLOW -> RED
        current_state = (current_state + 1) % 3;
    }

    return 0;
}

// Define the state functions
void state_red() {
    printf("RED LIGHT: Cars must stop!\n");
}

void state_green() {
    printf("GREEN LIGHT: Cars are allowed to go.\n");
}

void state_yellow() {
    printf("YELLOW LIGHT: Cars should prepare to stop.\n");
}

