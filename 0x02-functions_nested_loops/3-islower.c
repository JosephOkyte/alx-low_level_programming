#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: int c
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
