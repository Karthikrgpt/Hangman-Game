#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_CHANCE 6

static int randomindex, len, *correct_guess, game_over = 0, tries = 0, i, j, flag, win = 1;
char str[20], guess;
static char randomwords[20][20] = { "apple", "banana", "cherry", "dragonfruit", "mango", "fig", "grape", "honeydew", "kiwi", "lemon", "tomato", "potato", "carrot", "spinach", "broccoli", "cabbage", "cauliflower", "eggplant", "okra", "onion" };

void print_word(char *str, int *correct_guess, int len);
int check_guess(char guess, char *str, int *correct_guess, int len);
void game();

void print_titele(int tries);
void print_line();
void continue_key();
void print_game( int tries );

#endif