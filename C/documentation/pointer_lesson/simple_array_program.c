#include <stdio.h>

int main(void)
{
    // Define the enum for weekdays
    enum weekdays {mon, tues, wed, thurs, fri};

    // Define the corresponding temperatures for the weekdays
    float temps[5] = {18.7, 22.8, 25.0, 23.3, 23.2};

    // Define an array to store the names of the weekdays
    const char *day_names[5] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    int x = 0;  // Start from 0 to match the first index in the temps array

    // Print specific days directly using enum values
    printf("Tuesday was %.1f\n", temps[tues]);
    printf("Friday was %.1f\n", temps[fri]);

    printf("\n------------------------------\n\n\n");
    // Loop through all the days and print the corresponding temperatures
    while(x < 5)
    {
        printf("The temperature on %s was %.1f\n", day_names[x], temps[x]);
        x++;
    }

    return 0;
}
