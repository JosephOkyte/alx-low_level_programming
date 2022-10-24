#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to print
 * Return: Always 0
 */

void print_rev(char *s)
{
	int j;

	for (j = _strlen(s) - 1; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
