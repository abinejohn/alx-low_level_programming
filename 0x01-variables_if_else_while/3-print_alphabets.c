#include <stdio.h>

/**
 * main - puts the alphabet in lowercase, and then uppercase
 * You can only use the putchar function (every other function
 * (printf, puts, etc...) is forbidden)
 * All your code should be the main function
 * You can only use putchar three times in your code
 * Return: Always success
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
