#include <stdio.h>

/**
 * main - a program that computes and prints the sum of all the multiple
 * Return: 0
 */

int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}

	}
	printf("%d\n", sum);

	return (0);
}
