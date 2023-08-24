#include "main.h"
#include <string.h>
/**
 * prints_str - a function that prints a string
 *
 * @args: va_list
 * @count: count
 *
 * Return: a value
 */

int prints_str(va_list args, int *count)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (!str)
	{
		str = "(null)";
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
		(*count) += 6;
	}
	else
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
			(*count)++;
		}
	}
	return (0);
}

/**
 * prints_char - prints a character
 *
 * @args: va_list
 * @count: counts
 *
 * Return: a character
 */

int prints_char(va_list args, int *count)
{
	char c = va_arg(args, int);

	_putchar(c);
	(*count)++;
	return (1);
}

/**
 * prints_perc - prints a percent
 *
 * @count: number of values
 *
 * Return: number of values
 */

int prints_perc(int *count)
{
	_putchar('%');
	(*count)++;
	return (1);
}

/**
 * prints_int - prints an integers
 *
 * @args: va_list
 * @count: counts number of values
 *
 * Return: number of values
 */

int prints_int(va_list args, int *count)
{
	int n = va_arg(args, int);
	char buffer[20];

	snprintf(buffer, sizeof(buffer), "%d", n);
	_puts(buffer);
	*count += strlen(buffer);
	return (0);
}

/**
 * print_number - number printer
 *
 * @num: number values
 * @count: number of values
 *
 * Return: number
 */
int print_number(long num, int *count)
{
	int *numbr, counter = 0, i;
	long n;

	if (num < 0)
	{
		_putchar('-');
		(*count)++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return (0);
	}
	n = num;
	while (n != 0)
	{
		n /= 10;
		counter++;
	}
	n = num;
	numbr = malloc(sizeof(int) * counter);
	if (!numbr)
	{
		return (-1);
	}
	for (i = 0; i < counter; i++)
	{
		numbr[i] = n % 10;
		n /= 10;
	}
	for (i = 1; i <= counter; i++)
	{
		_putchar(numbr[counter - i] + '0');
		(*count)++;
	}
	free(numbr);
	return (0);
}
