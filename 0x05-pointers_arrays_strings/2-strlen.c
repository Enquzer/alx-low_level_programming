#include "main.h"
/**
 * _strlen - chanes initial.
 * @s: parameter to change.
 * Return: len
 *
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}