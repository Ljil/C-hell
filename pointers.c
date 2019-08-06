#include <stdio.h>

void func(int args[], int size) {
    
    for(int i = 0; i < size; i++) {
        printf("%d\n", args[i]);
    }   
}

int main(int argc, char const *argv[])
{
    int args[] = {1, 2, 3, 4, 5, 6, 7};
    func(args, sizeof(args)/sizeof(int));
    return 0;
}