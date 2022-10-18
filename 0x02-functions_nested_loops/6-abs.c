#include "main.h"

/**
 * _abs - computing absolute value
 * @n: value of an integer
 * Return: Always 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
