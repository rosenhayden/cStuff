#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int randomNumber = rand() % 11;
    int userInput;
    printf("randomNumber= %d\n", randomNumber);

    while (userInput != randomNumber) {
        printf("Enter your guess:\n");
        scanf("%d", &userInput);

        if (userInput == randomNumber) {
            printf("Winner\n");
            break; // Exit the loop when the guess is correct
        } else if (userInput > randomNumber) {
            printf("Too big\n");
        } else if (userInput < randomNumber) {
            printf("Too small\n");
        
    }

    return 0;
}
