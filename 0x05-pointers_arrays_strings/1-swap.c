#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: this is a parameter to change.
 * @b: this is the another parameter to change.
 *
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
