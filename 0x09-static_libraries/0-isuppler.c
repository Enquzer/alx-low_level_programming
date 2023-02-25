#include "main.h"
/**
 * _isupper - a function that checks for uppercase
 * @c: input integer
 * Return: 1if c is upper or 0 if not
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
