#include "functions.h"

void quickSort(int *entryArrayPointer, int first, int last) {
    
    int i = first, j = last, x = entryArrayPointer[(first + last) / 2];
 
    do {
        while (entryArrayPointer[i] < x) i++;
        while (entryArrayPointer[j] > x) j--;
 
        if(i <= j) {
            if (entryArrayPointer[i] > entryArrayPointer[j]) {
                int temp = entryArrayPointer[i];
                entryArrayPointer[i] = entryArrayPointer[j];
                entryArrayPointer[j] = temp;
            }
            i++;
            j--;
        }
    } while (i <= j);
 
    if (i < last)
        quickSort(entryArrayPointer, i, last);
    if (first < j)
        quickSort(entryArrayPointer, first, j);
}