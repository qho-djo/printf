#include "main.h"
/**
 * _puts - a fuction that prints a string
 * @c: a string parameter
 *
 * Return: number of byte
 */

int _puts(char *c)
{
	int a;

	if (c)
	{
		for (a = 0; c[a] != '\0'; a++)
		{
			_putchar(c[a]);
		}
	}
	return (a);
}
