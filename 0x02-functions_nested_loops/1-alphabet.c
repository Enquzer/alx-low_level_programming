#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * print_alphabet - print all print_alphabet<F2> in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
