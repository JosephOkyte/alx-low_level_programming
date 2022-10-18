#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: Used on checking
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 910 || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
