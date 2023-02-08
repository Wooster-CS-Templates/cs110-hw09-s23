// The header file contains the function prototypes, but not the
// implementations (the full functions with their bodies). Other code that
// wants to use the stats module will include stats.h.


// stddef.h is needed for size_t
#include <stddef.h>


/**
 * Find the maximum value in an array of integers. The array must contain at
 * least one element.
 *
 * Parameters:
 *     array - the array to search
 *     size - the number of elements in array
 *
 * Return value:
 *     The maximum value in the array
 */
int max_value(const int array[], size_t size);

/**
 * Find the minimum value in an array of integers. The array must contain at
 * least one element.
 *
 * Parameters:
 *     array - the array to search
 *     size - the number of elements in array
 *
 * Return value:
 *     The minimum value in the array
 */
int min_value(const int array[], size_t size);

/**
 * Find the sum of an array of integers. The array must contain at least
 * one element.
 *
 * Parameters:
 *     array - the array on which to calculate the sum
 *     size - the number of elements in array
 *
 * Return value:
 *     The sum of the values in the array
 */
int sum(const int array[], size_t size);

/**
 * Find the average of an array of integers. The array must contain at least
 * one element.
 *
 * Parameters:
 *     array - the array on which to calculate the average
 *     size - the number of elements in array
 *
 * Return value:
 *     The average of the values in the array
 */
double average(const int array[], size_t size);
