#include "main.h"

/**
 * print_alphabet_x10 - A function that prints alphabet in lowercases x10 times
 * 
 * Return: Always 0.
 */

void print_alphabet_×10(void)
{
	char c;
	int i = 0;

	while (1 <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_puchar(c);
		}

		_putchar('\n');
		i++;
	}

}
