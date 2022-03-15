#include "main.h"
/**
 * main - Prints Holberton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char eyosi[] = "_putchar";

	int d;

	for (d = 0; d < 8; d++)
	{
		_putchar(eyosi[d]);
	}
	_putchar('\n');
	return (0);
}
