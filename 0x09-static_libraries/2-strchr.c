#include "main.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: an input string to search in
 * @c: an input string to locate intor string s
 * Return: returns pointer to c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
