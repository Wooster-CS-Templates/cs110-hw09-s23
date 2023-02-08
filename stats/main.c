#include <stdio.h>

// Including stats.h gives this file access to the function prototypes in
// stats.h, which will be enough to compile this file to an object file. That
// object file can then be linked with stats.o to form an executable. The
// commands to accomplish this are defined in the Makefile, so all you have to
// do to build the program is run make.
#include "stats.h"

int main() {
    size_t array_size;

    printf("Enter the size of the array: ");
    scanf("%zu", &array_size);

    int array[array_size];

    printf("Enter the values of the array: ");

    for(size_t i = 0; i < array_size; i++) {
        scanf("%i", &array[i]);
    }

    printf("Max: %i\n", max_value(array, array_size));
    printf("Min: %i\n", min_value(array, array_size));
    printf("Sum: %i\n", sum(array, array_size));
    printf("Average: %lf\n", average(array, array_size));
    //printf("Range: %i\n", range(array, array_size));

    return 0;
}
