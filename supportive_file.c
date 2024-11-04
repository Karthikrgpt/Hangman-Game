#include "header.h"

void print_word(char *str, int *correct_guess, int len) {
    for ( i = 0; i < len; i++) {
        if (correct_guess[i]) {
            printf("%c ", str[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int check_guess(char guess, char *str, int *correct_guess, int len) {
    flag = 0;
    for ( i = 0; i < len; i++) {
        if (str[i] == guess && !correct_guess[i]) {
            correct_guess[i] = 1;
            flag = 1;
        }
    }
    return flag;
}

void print_game( int tries ) {
    printf("\t \033[1;30m_______\033[0m\n");
    printf("\t \033[1;30m|\033[0m     \033[1;30m|\033[0m\n");
    printf("\t \033[1;30m|\033[0m     \033[1;31m%s\033[0m\n", (tries > 0) ? "O" : " ");
    printf("\t \033[1;30m|\033[0m    \033[1;31m%s%s%s\033[0m\n", (tries > 2) ? "/" : " ", (tries > 1) ? "|" : " ", (tries > 3) ? "\\" : " ");
    printf("\t \033[1;30m|\033[0m    \033[1;31m%s\033[0m \033[1;31m%s\033[0m\n", (tries > 4) ? "/" : " ", (tries > 5) ? "\\" : " ");
    printf("\t\033[1;30m_|_\033[0m\n");
}

void print_titele(int tries) {
    system("clear");
    print_line();
    printf("\033[1;37m\t HANGMAN\033[0m\n");
    print_line();
    print_game( tries );
    print_line();
}

void print_line() {
    for ( i = 0; i < 25; i++ ) {
        printf("\033[1;37m-\033[0m");
    }
    printf("\n");
}

void continue_key() {
    printf("\n\033[1;34mPress Enter Key to continue\033[0m ");
    getchar();
    getchar();
}