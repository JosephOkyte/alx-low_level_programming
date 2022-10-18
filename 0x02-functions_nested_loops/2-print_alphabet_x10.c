#include <stdio.h>
#include <stdlib.h>

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet, in lowercase
 */

	void print_alphabet_x10(void)
{
	int rollover = 0;

	while (rollover < 10)
	{
		int i = 97;

		while (i < 123)
			{
			putchar(i);
			i++;
			}
		putchar(10);
		rollover++;
	}
}
