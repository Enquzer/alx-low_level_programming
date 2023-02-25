#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments it recieves
 * @argc: argument count
 * @argv: argument values
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
