#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // for sleep

// Define constants for states using an enum for clarity
enum { IDLE = 0, MOVING_UP, MOVING_DOWN, DOORS_OPEN };

// Function prototypes for each state
void state_idle();
void state_selection();
void state_moving_up();
void state_moving_down();
void state_doors_open();

// Declare a variable to track the current state
int current_state = IDLE;
int current_floor = 1;     // Start the elevator at floor 1
int target_floor = 0;      // Variable to store the target floor

// Define the state function table
void (*state_table[4])() = { state_idle, state_moving_up, state_moving_down, state_doors_open };

int main(void) {
    while (1) {
        // Call the function for the current state
        state_table[current_state]();
    }
    return 0;
}

// IDLE State: Wait for floor selection
void state_idle() {
    printf("IDLE: Elevator is on floor %d. Enter floor number (1 - 5): ", current_floor);
    scanf("%d", &target_floor);

    // Check if the target floor is valid
    if (target_floor < 1 || target_floor > 5) {
        printf("valid floor. Please enter a floor between 1 and 5.\n");
        current_state = IDLE; // Stay in IDLE if the input is invalid
    } else if (target_floor == current_floor) {
        printf("You are already on floor %d.\n", current_floor);
        current_state = DOORS_OPEN; // Open the doors if on the same floor
    } else if (target_floor > current_floor) {
        current_state = MOVING_UP;
    } else {
        current_state = MOVING_DOWN;
    }
}

// MOVING_UP State: Move the elevator up to the target floor
void state_moving_up() {
    while (current_floor < target_floor) {
        current_floor++;
        printf("MOVING_UP: Elevator passing floor \e[31m%d...\e[0m\n", current_floor);
        sleep(1); // Simulate the elevator moving with a 1-second delay
    }
    current_state = DOORS_OPEN; // When target is reached, transition to DOORS_OPEN
}

// MOVING_DOWN State: Move the elevator down to the target floor
void state_moving_down() {
    while (current_floor > target_floor) {
        current_floor--;
        printf("MOVING_DOWN: Elevator passing floor \e[36m%d...\e[0m\n", current_floor);
        sleep(1); // Simulate the elevator moving with a 1-second delay
    }
    current_state = DOORS_OPEN; // When target is reached, transition to DOORS_OPEN
}

// DOORS_OPEN State: Simulate the doors opening and closing
void state_doors_open() {
    printf("DOORS_OPEN: Elevator has reached floor %d. Doors are open.\n", current_floor);
    sleep(2); // Simulate the doors being open for 2 seconds
    printf("DOORS_OPEN: Doors are closing.\n");
    current_state = IDLE; // After doors close, transition back to IDLE
}
