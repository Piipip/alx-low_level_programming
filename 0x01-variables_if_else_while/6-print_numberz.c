#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar('0' + digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
