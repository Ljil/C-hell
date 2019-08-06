#include "functions.h"


void bubbleSort(int *entryArrayPointer, int length) {
    int n = 0;
    int i = 0;
    while (i < length - 1) {
        if(entryArrayPointer[i] > entryArrayPointer[i + 1]) {
            int temp = entryArrayPointer[i];
            entryArrayPointer[i] = entryArrayPointer[i + 1];
            entryArrayPointer[i + 1] = temp;
            i = 0;
        } else {
            i++;
        }
        n++;
        printf("\nIteration %3d:\t", n);
        for(int i = 0; i < length; i++) {
            printf("%4d\t", entryArrayPointer[i]);
        }
    }

    printf("\nBubble sort finished in %d iterations\n", n);
}
