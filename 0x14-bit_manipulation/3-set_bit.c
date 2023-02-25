#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets teh value of a bit at a given index to 1
 * @n: a pointer to the bit
 * @index: the index to set the value
 * Return: -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
