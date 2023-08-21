#include "main.h"
#include <string.h>

/**
 * prints_binary - unsigned int
 * @args: va_list
 * @count: counter
 *
 * Return: always 0
 */
void prints_binary(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 1;

	while ((n / i) > 1)
		i *= 2;
	while (i > 0)
	{
		_putchar((n / i) + '0');
		*count += 1;
		n %= i;
		i /= 2;
	}
}
