#include <stdio.h>
#include "fibonacci.h"
#include <assert.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX_VALUE 93

void file_exists(const char path[]);

int main() {

    // Check for files:
    file_exists("Makefile");
    file_exists("fibonacci.h");
    file_exists("fibonacci.c");
    file_exists("main.c");

    // Check program results
    FILE* fib_nums;
    fib_nums = fopen("fib-nums", "rb");
    assert(fib_nums != NULL);
    
    for (unsigned int i = 0; i <= MAX_VALUE; ++i) {
        unsigned long received = fibonacci(i);
        unsigned long expected;
        fread(&expected, sizeof(unsigned long), 1, fib_nums);

        if(received != expected) {
            printf("Test fibonacci(%u) returned %lu, expected %lu\n", i, received, expected);
            fclose(fib_nums);
            exit(1);
        }
    }
    
    fclose(fib_nums);

    return 0;
}

void file_exists(const char path[]) {
    if (access(path, F_OK) != 0) {
        printf("Failed to find file: %s\n", path);
        exit(1);
    }
}
