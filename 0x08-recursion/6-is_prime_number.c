#include "main.h"
/**
 * prime2 - Checks if a number is divisible
 * @a: The number to be checked
 * @b: The divisor
 * Return: If the number is divisible - 0
 * If the number is not divisible - 1
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
