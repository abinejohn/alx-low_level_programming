#include <stdio.h>

/**
 * main - prints all possible different combination of two digits
 *
 * Return: Always success
 */

int main(void)
{
	int m, n;

	for (m = 48; m <= 56; m++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > m)
			{
				putchar(m);
				putchar(n);
				if (m != 56 || n != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
