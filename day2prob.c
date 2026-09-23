/*
Question of Day 2
Write a program using a while loop that repeatedly asks the user to enter the password and stops only when the correct password is entered.
Finally, display "Login successful!".
  */

#include <stdio.h>
#include <string.h> // Needed for strcmp() to compare passwords

int main() {
    // Step 1: Define the correct password
    char correct_password[] = "secret123";
    
    // Step 2: Create a storage box for the user's guess (size 50 characters)
    char user_input[50];

    // Step 3: Start a continuous loop
    while (1) {
        // Step 4: Ask the user to enter the password
        printf("Enter the password: ");
        scanf("%s", user_input);

        // Step 5: Check if the entered password matches the correct one
        // strcmp returns 0 if both strings are exact matches
        if (strcmp(user_input, correct_password) == 0) {
            break; // Exit the loop if correct
        } else {
            printf("Incorrect password. Try again.\n");
        }
    }

    // Step 6: Display the success message after breaking out of the loop
    printf("Login successful!\n");

    return 0;
}
