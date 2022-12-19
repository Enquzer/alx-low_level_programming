#include "main.h"
/**
 *  _puts - points to string and add line
 *  @str: pinter char
 *  Return: Always 0 (Success)
 *
 */
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
