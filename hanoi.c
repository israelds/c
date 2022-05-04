#include <stdlib.h>
#include <stdio.h>

void showMenu(void);
void showCredits(void);

void main(void) {
    int option;
    showMenu();
    scanf("%i", &option);

    if(option == 2) {
        showCredits();
    }
}

void showMenu(void) {
    system("clear");
    printf("\tTORRE DE HANOI\n\n");
    printf("\t1 - Jogo\n");
    printf("\t2 - Créditos\n");
    printf("\t3 - Sair\n");
}

void showCredits(void) {
    system("clear");
    printf("\tFeito por Israel\n");
}
