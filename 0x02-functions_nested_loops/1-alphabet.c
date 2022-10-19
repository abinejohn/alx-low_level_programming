#include "main.h"

/**
 * print_alphabet - print alphabet
 * main - prints alphabet, in lowecase, followed by a new line
 * Description: print alphabet
 * Return: Always success 0
 */

void print_alphabet(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
