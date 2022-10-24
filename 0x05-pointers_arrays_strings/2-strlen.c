#include "main.h"

/**
 * _strlen -  length of a string
 * @s: int on length of a string
 * Return: Always 0
 */

int _strlen(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{}
	return (j);
}
