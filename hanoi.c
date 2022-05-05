/*
 * Author: Israel Souza <israel.diassouza@gmail.com>
 */

#include <stdlib.h>
#include <stdio.h>
// #include <curses.h>

int rods[3][0];

void clear(void);
int menu(void);
int selectLevel(void);

void main(void) {
    clear();
    int menuOption = 0;
    int level = -1;
    menuOption = menu();

    switch(menuOption) {
        case 1:
            printf("The Rules are: ");
            break;
        case 2: 
            level = selectLevel(); 
            break;
        case 0:
            clear();
            exit(0);
    }
}

int menu(void) {
    clear();
    int option = 0;
    printf("1 - Show the Rules\n");
    printf("2 - Play\n");
    printf("0 - Quit\n");
    scanf("%d", &option);
    return option;
}

int selectLevel(void) {
    int level = -1;
    clear();
    printf("1 - Easy\n");
    printf("2 - Intermediate\n");
    printf("3 - Hard\n");
    printf("4 - Custom\n");
    scanf("%d", &level);
    return level;
}

void clear(void) {
    system("clear");
}