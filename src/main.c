// main.c - A simple C program with an intentional error

#include <stdio.h>

int main() {
    int a = 10;
    printf("Hello, World!\n");
    // Intentional error: using undeclared variable 'b'
    printf("This will cause an error: %d\n", b);
    return 0;
}

