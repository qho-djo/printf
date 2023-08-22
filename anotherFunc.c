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
	int i = 1, j, binary[32];

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
	}
	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	for (j = i - 1; j > 0; j--)
	{
		_putchar(binary[j] + '0');
		(*count)++;
	}
}
