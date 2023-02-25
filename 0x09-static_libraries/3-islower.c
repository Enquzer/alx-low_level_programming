#include "main.h"
/**
 * _islower - chech main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lower case 10 times
 * Return: 1 if lowercase or 0 if uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
