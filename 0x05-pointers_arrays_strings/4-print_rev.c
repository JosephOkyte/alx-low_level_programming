#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string to print
 * Return: Always 0
 */

void print_rev(char *s)
{
	int j;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
