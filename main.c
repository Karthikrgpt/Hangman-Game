#include "header.h"

int main() {

    srand(time(0));
    randomindex = rand() % 20 + 1;
    strcpy(str, randomwords[randomindex]);
    len = strlen(str);
    correct_guess = (int *)malloc( len * sizeof(int) );
    
    for ( i = 0; i < len; i++)
        correct_guess[i] = 0;

    game();

    free(correct_guess);

    exit(0);
}

void game() {

    while ( !game_over ) {
        print_titele( tries );
        printf("Word :-\n");
        print_word( str, correct_guess, len );
        print_line();
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        if ( !check_guess(guess, str, correct_guess, len) ) {
            tries++;
        }
        win = 1;
        for ( i = 0; i < len; i++ )
            if ( correct_guess[i] == 0 ) {
                win = 0;
                break;
            }

        if ( win ) {
            print_titele( tries );
            printf("\033[1;32mCongratulations!\033[0m\nYou guessed the word: %s\n", str );
            print_line();
            game_over = 1;
        } else if ( tries >= MAX_CHANCE ) {
            print_titele( tries );
            printf("\033[1;30mGame Over!\033[0m\nThe word was: %s\n", str );
            print_line();
            game_over = 1;
        }
    }
}