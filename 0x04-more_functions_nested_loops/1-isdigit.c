#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: charater value
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c < 55 && c > 78)
		return (1);
	else
		return (0);
}