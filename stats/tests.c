#include <stdio.h>

#include "stats.h"

// Print an array with the following form: {1,2,3}
void print_array(int array[], int size);

// Test the simple_stats functions for an array and print the results.
int test_array(int array[], int size, int expected_min, int expected_max,
                int expected_sum, int expected_range);

int main() {
    int ascending[] = {1, 2, 3};
    if (!test_array(ascending, 3, 1, 3, 6, 2)) {
        return -1;
    }

    int descending[] = {3, 2, 1};
    if (!test_array(descending, 3, 1, 3, 6, 2)) {
        return -1;
    }

    int max_repeated[] = {2, -4, 10, 3, 10};
    if (!test_array(max_repeated, 5, -4, 10, 21, 14)) {
        return -1;
    }


    int min_repeated[] = {5, -100, 2, -100};
    if (!test_array(min_repeated, 4, -100, 5, -193, 105)) {
        return -1;
    }

    int all_same[] = {1, 1, 1};
    if (!test_array(all_same, 3, 1, 1, 3, 0)) {
        return -1;
    }

    return 0;
}

void print_array(int array[], int size) {
    printf("{");

    for(int i = 0; i < size; i++) {
        printf("%i", array[i]);
        if(i != size - 1)
            printf(",");
    }

    printf("}");
}

int test_array(int array[], int size, int expected_min, int expected_max,
                int expected_sum, int expected_range) {
    printf("Testing with the following array: ");
    print_array(array, size);
    printf("\n");

    // We'll set this to 0 if any tests fail
    int all_tests_passed = 1;

    int result;

    result = min_value(array, size);

    if(result != expected_min) {
        printf("ERROR: expected %i for min but got %i\n", expected_min, result);
        all_tests_passed = 0;
    }

    result = max_value(array, size);

    if(result != expected_max) {
        printf("Error: expected %i for max but got %i\n", expected_max, result);
        all_tests_passed = 0;
    }

    result = sum(array, size);

    if(result != expected_sum) {
        printf("Error: expected %i for sum but got %i\n", expected_sum, result);
        all_tests_passed = 0;
    }

    result = range(array, size);

    if(result != expected_range) {
        printf("Error: expected %i for range but got %i\n", expected_range, result);
        all_tests_passed = 0;
    }

    return all_tests_passed;
}
