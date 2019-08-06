#include "functions.h"

//make && make -f Makefile clean && ./mybin

int main(int argc, char const *argv[])
{
    int entryArr[12];

    int length = sizeof(entryArr)/sizeof(int);
    
    randArr(entryArr, length);

    //bubbleSort(entryArr, length);

    //selectionSort(entryArr, length);

    quickSort(entryArr, 0, length - 1);
    
    printf("\nSorted array\n");
    for(int i = 0; i < length; i++) {
        printf("%d\t", entryArr[i]);
    }
    printf("\n");
    return 0;
}