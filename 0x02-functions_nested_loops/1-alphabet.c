#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_alphabet - function that prints the alphabet in lowercase
 *
 * Description: Programm to print alphabets using putchar function
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
