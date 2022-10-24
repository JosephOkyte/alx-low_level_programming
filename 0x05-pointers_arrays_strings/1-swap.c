#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: variable a
 * @b: variable b
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int swap1 = *a;
	int swap2 = *b;

	*a = swap2;
	*b = swap1;
}
