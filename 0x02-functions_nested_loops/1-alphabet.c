#include <stdio.h>
#include <stdlib.h>


/**
 * print_alphabet - function that prints the alphabet in lowercase
 *
 * Description: print alphabets using putchar function
 *
 * use putchar twice
 *
 * Return: Always 0 (Success)
 */

	int print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);

}
