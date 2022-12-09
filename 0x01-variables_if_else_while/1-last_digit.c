#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program will assign a random number to the variable n each time it is executed. *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int r;
	int num;

	srand(time(0));
	r = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", r);
	num = r % 10;
	if (num > 5)
	{
		printf("%d and is greater than 5\n", num);
	}
	else if ((num < 6) && (num < 0))
	{
		printf("%d and is less than 6 and not 0\n", num);
	}
	else
	{
		printf("%d and is 0\n", num);
	}
	return (0);
}
