#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * Desc: Header file containing prototypes for all functions
 *
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));


#endif
