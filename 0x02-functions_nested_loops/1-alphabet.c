#include <stdio.h>
#include "main.h">

/**
 * main - function that prints the alphabet, in lowercase, followed by a new line
 *
 * Description - Program that prints lowercases
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
