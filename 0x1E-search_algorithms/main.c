#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    printf("\nNULL input check: %d\n", binary_search(NULL, size, 999));
    printf("\nOriginal array: ");
    print_array(array, 10);
    printf("\nSingle element check for 0: %d\n", binary_search(array, 1, 0));
    printf("\nSingle element check for 99: %d\n", binary_search(array, 1, 99));
    printf("\nTwo elements check for 0: %d\n", binary_search(array, 2, 0));
    printf("\nTwo elements check for 1: %d\n", binary_search(array, 2, 1));
    printf("\nThree elements check for 0: %d\n", binary_search(array, 3, 0));
    printf("\nThree elements check for 1: %d\n", binary_search(array, 3, 1));
    printf("\nThree elements check for 2: %d\n", binary_search(array, 3, 2));
    printf("\nThree elements check for 3: %d\n", binary_search(array, 3, 3));
    return (EXIT_SUCCESS);
}
