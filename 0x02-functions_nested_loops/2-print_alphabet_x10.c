#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char d;

	for (i = 0; i < 10; i++)
	{
		for (d = 'a'; d <= 'z'; d++)
			_putchar(d);
		_putchar('\n');
	}
}
