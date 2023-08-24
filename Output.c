#include "main.h"

/**
 * prints_u - a function that prints for %u
 * format specifier
 * @args: va_list
 * @count: counter
 *
 * Return: a function
 */

int prints_u(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	return (print_number(num, count));
}

/**
 * prints_o - a function that prints for %o
 * format specifier
 * @args: va_list
 * @count: counter
 *
 * Return: a function
 */

int prints_o(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	_putchar('0');
	return (prints_base(num, 8, count));
}

/**
 * prints_x - a function that prints for %x
 * format specifier
 * @args: va_list
 * @count: counts number of characters printed
 *
 * Return: a function
 */

int prints_x(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	_puts("0x");
	return (prints_base(num, 16, count));
}

/**
 * prints_X - a function that prints for %X
 * format specifier
 * @args: va_list
 * @count: counts number of characters printed
 *
 * Return: a function
 */

int prints_X(va_list args, int *count)
{
	unsigned int num = va_arg(args, unsigned int);

	_puts("0X");
	return (prints_uppercaseHex(num, 16, count));
}
