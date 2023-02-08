#include "stats.h"

int max_value(const int array[], size_t size) {
    int max = array[0];

    for(size_t i = 1; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }

    return max;
}

int min_value(const int array[], size_t size) {
    int min = array[0];

    for(size_t i = 1; i < size; i++) {
        if(array[i] < min) {
            min = array[i];
        }
    }

    return min;
}

int sum(const int array[], size_t size) {
    int sum = 0;

    for(size_t i = 0; i < size; i++) {
        sum += array[i];
    }

    return sum;
}

double average(const int array[], size_t size) {
    return (double)sum(array, size) / size;
}
