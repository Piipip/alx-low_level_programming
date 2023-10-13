#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase != 'q' && lowerCase != 'e')
		{
			putchar(lowerCase);
		}
		lowerCase++;
	}
	putchar('\n');

	return (0);
}
