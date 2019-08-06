#include <stdio.h>
#include <ctype.h>


int main() {
    printf("short       %d\n", sizeof(short) * 8);
    printf("int         %d\n", sizeof(int) * 8);
    printf("long        %d\n", sizeof(long) * 8);
    printf("float       %d\n", sizeof(float) * 8);
    printf("double      %d\n", sizeof(double) * 8);
    printf("long double %d\n", sizeof(long double) * 8);


    return 0;
}