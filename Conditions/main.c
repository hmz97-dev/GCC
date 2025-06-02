#include <stdio.h>

void guessNumber(int guess) {
    int secret = 555;

    if (guess < secret) {
        printf("Your guess %d is too low.\n", guess);
    } else if (guess > secret) {
        printf("Your guess %d is too high.\n", guess);
    } else {
        printf("Congratulations! You guessed it right: %d\n", guess);
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}

