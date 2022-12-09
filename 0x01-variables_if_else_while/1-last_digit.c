#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a random number and states whether
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);
	num = n % 10;
	if (num > 5)
	{
		printf("%d and is greater than 5\n" , num);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("%d and is less than 6 and not \n" , num);
	}
}
