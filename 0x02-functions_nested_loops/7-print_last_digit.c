#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number values
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int LastDigit = n % 10;

		if (n < 0)
		{
			LastDigit = LastDigit * -1;
		}
	_putchar(LastDigit + '0');


	return (LastDigit);
}
