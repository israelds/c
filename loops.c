#include <stdio.h>

void main(void) {
    printf("do-while\n");
    int i = 0;
    do {
        printf("%i\n", ++i);
    } while(i < 10);
    i = 0;
    printf("\n");
    printf("while\n");
    while(i < 10) {
        printf("%i\n", ++i);
    }
    printf("\n");
    printf("for\n");
    for(int j = 0 ; j < 10 ; j++) {
        printf("%i\n", j+1);
    }

}