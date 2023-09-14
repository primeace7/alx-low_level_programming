#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

/*Include standard libararies*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Include custom function prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t size);
int jump_search(int *array, size_t size, int value);
double minimum(double, double);

#endif /*_SEARCH_ALGOS_*/
