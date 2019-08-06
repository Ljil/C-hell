#include "functions.h"

void selectionSort(int *entryArrayPointer, int length) {

    int n = 0;
    int currentLength = length;
    while(currentLength > 1) {
        int max = entryArrayPointer[0];
        int maxIndex = 0;

        for(int i = 0; i < currentLength; i++) {
            if(entryArrayPointer[i] > max) {
                max = entryArrayPointer[i];
                maxIndex = i;
            }
        }

        printf("\nMax %4d at index %2d\t\t", max, maxIndex);
        for(int i = 0; i < currentLength; i++) {
            printf("%d\t", entryArrayPointer[i]);
        }
        currentLength--;

        entryArrayPointer[maxIndex] = entryArrayPointer[currentLength];
        entryArrayPointer[currentLength] = max;
    
        n++;
    }
    
    printf("\n\nSelection sort finished in %d iterations\n", n);
}