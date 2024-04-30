#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    char curr[100];
    int wrong = 0;
    int wordLength, i;
    int gameWon = 0;
    int hintGiven = 0;
    system("cls");

    printf("Enter the word to be guessed (in lowercase): ");
    scanf("%s", word);
    printf("--------------------------------------------------- \n");

    for (i = 0; i < strlen(word); i++) {
        if (!islower(word[i])) {
            printf("--------------------------------------------------- \n");
            printf("Error! Please enter the word in lowercase.\n");
            return 1;
        }
    }

    wordLength = strlen(word);

    for (i = 0; i < wordLength; i++) {
        curr[i] = '_';
    }
    curr[wordLength] = '\0';

    while (wrong < 6 && gameWon != 1) {
        printf("____\n");
        printf("|  |\n");
        if (wrong >= 1) printf("|  0\n");
        if (wrong == 2) printf("|  |\n");
        if (wrong == 3) printf("| /|\n");
        if (wrong >= 4) printf("| /|\\\n");
        if (wrong == 5) printf("| / \n");
        if (wrong == 6) printf("| / \\ \n");
        printf("|\n");

        printf("Current word: %s\n", curr);

        char guess;
        printf("Enter a letter to guess or type '1' for a hint: ");
        scanf(" %c", &guess);
        printf("\n--------------------------------------------------- \n");

        if (!islower(guess) && guess != '1') {
            printf("--------------------------------------------------- \n");
            printf("Error! Please enter a single lowercase letter or 'H' for a hint.\n");
            printf("--------------------------------------------------- \n");
            continue;
        }

        if (guess == '1') {
            if (hintGiven > 0) {
                printf("--------------------------------------------------- \n");
                printf("No more hints available.\n");
                printf("--------------------------------------------------- \n");
            } else {
                for (i = 0; i < wordLength; i++) {
                    if (curr[i] == '_') {
                        curr[i] = word[i];
                        hintGiven = 1;
                        break;
                    }
                }
            }
            continue;
        }

        int alreadyGuessed = 0;
        for (i = 0; i < wordLength; i++) {
            if (curr[i] == guess) {
                printf("--------------------------------------------------- \n");
                printf("You already guessed '%c'. Try again.\n", guess);
                printf("--------------------------------------------------- \n");
                alreadyGuessed = 1;
                break;
            }
        }
        if (alreadyGuessed) {
            continue;
        }

        int letterFound = 0;
        for (i = 0; i < wordLength; i++) {
            if (word[i] == guess) {
                curr[i] = guess;
                letterFound = 1;
            }
        }

        if (strcmp(curr, word) == 0) {
            printf("--------------------------------------------------- \n");
            printf("Congratulations! You guessed the right word: %s\n", word);
            printf("--------------------------------------------------- \n");
            gameWon = 1;
        }

        if (!letterFound) {
            wrong++;
        }
    }


    if (wrong >= 6 && gameWon != 1) {
        printf("--------------------------------------------------- \n");
        printf("You die! The word was: %s\n", word);
        printf("--------------------------------------------------- \n");
    }

    return 0;
}
