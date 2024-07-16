#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int start, int stop);
int jump_search(int *array, size_t size, int value);
int iterate(int *array, int start, int stop, int value);
int interpolation_search(int *array, size_t size, int value);

#endif
