#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strdup - returns pointer to a newly allocated space in memory
 *  @str: This is the input string
 *  Return: function returns a pointer to the duplicated string.
 *  It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;
	s = (char *)  malloc((a + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (b = 0; b < a ; b++)
		s[b] = str[b];

	s[a + 1] = '\0';
	return (s);
}
