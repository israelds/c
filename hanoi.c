/*
 * Author: Israel Souza <israel.diassouza@gmail.com>
 */

#include <stdlib.h>
#include <stdio.h>

int menu(void);


void main(void) {
    int menuOption = 0;
    menuOption = menu();
    printf("Option %d\n", menuOption);

    switch(menuOption) {
        case 1:
            printf("The Rules are: ");
            break;
        case 2: 
            printf("Let's play\n");
            break;
        case 0: 
            exit(0);
    }
}


int menu(void) {
    int option = 0;
    printf("1 - Show the Rules\n");
    printf("2 - Play\n");
    printf("0 - Quit\n");

    scanf("%d", &option);

    return option;
}