#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
    char word[100][100] = {"thailand", "england", "india", "yellow", "green", "freeze", "breeze", "crack", "black", "myanmar", "superman", "ghostrider", "hero", "red", "eyes", "perfect"};
    int wordLength, i;
    int wrong = 0;
    int gameWon = 0;

    srand(time(NULL));
    int r = rand() % 16;
    wordLength = strlen(word[r]);

    char curr[wordLength + 1];
    for (i = 0; i < wordLength; i++) {
        curr[i] = '_';
    }
    curr[wordLength] = '\0';

    int hintGiven = 0;

    while (wrong < 6 && gameWon != 1) {
        printf("____\n");
        printf("|  |\n");
        if (wrong >= 1) printf("|  0 \n");
        if (wrong == 2) printf("|  | \n");
        if (wrong == 3) printf("| /| \n");
        if (wrong >= 4) printf("| /|\\ \n");
        if (wrong >= 5) printf("| / \\ \n");
        printf("| \n");

        printf("Current word: %s\n", curr);

        char guess;
        printf("Enter a letter to guess or type '1' for a hint: ");
        scanf(" %c", &guess);

        if (guess == '1') {
            if (hintGiven > 0) {
                printf("No more hints available.\n");
                continue;
            } else {
                for (i = 0; i < wordLength; i++) {
                    if (curr[i] == '_') {
                        curr[i] = word[r][i];
                        hintGiven = 1;
                        break;
                    }
                }
                continue;
            }
        }

        if (!islower(guess)) {
            printf("Error! Please enter a single lowercase letter.\n");
            continue;
        }

        int alreadyGuessed = 0;
        for (i = 0; i < wordLength; i++) {
            if (curr[i] == guess) {
                printf("You already guessed '%c'. Try again.\n", guess);
                alreadyGuessed = 1;
                break;
            }
        }
        if (alreadyGuessed) {
            continue;
        }

        int letterFound = 0;
        for (i = 0; i < wordLength; i++) {
            if (word[r][i] == guess) {
                curr[i] = guess;
                letterFound = 1;
            }
        }

        if (strcmp(curr, word[r]) == 0) {
            printf("Congratulations! You guessed the right word: %s\n", word[r]);
            gameWon = 1;
        }

        if (!letterFound) {
            wrong++;
        }
    }

    if (wrong >= 6 && gameWon != 1) {
        printf("You lose! The word was: %s\n", word[r]);
    }

    return 0;
}
