#include <stdio.h>
#include <stdlib.h> // for random numbers
#include <time.h> // provide the seed for random numbers

/* Generate a random number from 0 to 20 
   Ask user to guess what it is
   display error if guess is above 20 or less than 0.

   Then when user guesses between 0 and 20 but it's incorrect,
   tell user whether they're too high or too low, or if they 
   were correct, congratulate them.

   this game will only live for 5 turns. 
*/

/* creating a random number:

    time_t t; -> creating a time variable
    
    srand((unsigned) time(&t)); -> initialize random number generator
    
    int randomNumer = rand() % 21; -> get random number (0-20) and store
    in int variable
 */

int guessTheNumber() {

    time_t t;
    int guess;
    int trueLoop = 1;

    srand((unsigned) time(&t));
    int randomNumber = rand() %21;

    for (trueLoop = 1; trueLoop <= 5; ++trueLoop) {
        /* Asking user for guess input */
        printf("Please guess a number between 0 and 20 \n");
        scanf("%d", &guess);
        
        if (guess >= 0 && guess <= 20) {

            if (guess != randomNumber) {
                if (guess < randomNumber) {
                    printf("Your guess is a little low\n");
                } else {
                    printf("Your guess is a little high\n");
                }
            } else {
                printf("Correct! The random number is: %d \n",randomNumber);
                return 0;
            }
        } else {
            printf("I did say the number had to be between 0 and 20\n");
        }
    }
    printf("You had 5 tries, you did not guess the number, sorry!");

    return 0;
}