#include "main.h"
#include <string.h>

/**
 * prints_binary - unsigned int
 * @args: va_list
 * @count: counter
 *
 * Return: always 0
 */
int prints_binary(va_list args, int *count)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 1, j, binary[32];

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
		return (0);
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
	return (0);
}

/**
 * prints_base - a function that prints a number in it's base
 * @n: numbers
 * @base: base
 * @count: counter
 * Return: no value
 */

int prints_base(unsigned int n, int base, int *count)
{
	char *num = "0123456789abcdef", buffer[32];
	int a, len = 0;

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
		return (0);
	}
	while (n > 0)
	{
		buffer[len++] = num[n % base];
		n /= base;
	}
	for (a = len - 1; a >= 0; a--)
	{
		_putchar(buffer[a]);
		(*count)++;
	}
	return (0);

}

/**
 * prints_uppercaseHex - a function that prints a number in it's upercase hex..
 * @n: numbers
 * @base: base
 * @count: counter
 * Return: no value
 */

int prints_uppercaseHex(unsigned int n, int base, int *count)
{
	char *num = "0123456789ABCDEF", buffer[32];
	int a, len = 0;

	if (n == 0)
	{
		_putchar('0');
		(*count)++;
		return (0);
	}
	while (n > 0)
	{
		buffer[len++] = num[n % base];
		n /= base;
	}
	for (a = len - 1; a >= 0; a--)
	{
		_putchar(buffer[a]);
		(*count)++;
	}
	return (0);

}

/**
 * prints_S - prints string with non-printable characters.
 * @args: va_list
 * @count: counter
 *
 * Return: none
 */
int prints_S(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (str == NULL)
		return (-1);

	while (str[i] != '\0')
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			prints_single_x(str[i], count);
			*count += 4;
		}
		else
		{
			_putchar(str[i]);
			(*count)++;
		}
		i++;
	}
	return (0);
}


/**
 * prints_single_x - prints a single character
 * ASCII value in uppercase hexadecimal format.
 *
 * @n: a value
 * @count: Pointer counter
 */
void prints_single_x(int n, int *count)
{
	char hex_num[] = "0123456789ABCDEF";

	_putchar(hex_num[(n >> 4) & 0xF]);
	_putchar(hex_num[n & 0xF]);
	(*count) += 2;
}
