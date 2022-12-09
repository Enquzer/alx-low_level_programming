#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all digit base of 10
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
