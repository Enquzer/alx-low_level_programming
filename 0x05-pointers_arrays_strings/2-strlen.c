#include "main.h"
/**
 * _strlen - chanes initial.
 * @s: String
 * Return: longi
 *
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

