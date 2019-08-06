#include "functions.h"

void randArr(int *entryArrayPointer, int length) {
    srand(time(NULL));
    for(int i = 0; i < length; i++) {
        entryArrayPointer[i] = rand() % 1000;
    }
    printf("\nRandomlise array\n");
    for(int i = 0; i < length; i++) {
        printf("%d\t", entryArrayPointer[i]);
    }
    printf("\n");
}