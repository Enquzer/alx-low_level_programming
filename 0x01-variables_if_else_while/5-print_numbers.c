#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints single digit number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);

}

