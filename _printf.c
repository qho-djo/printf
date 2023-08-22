#include "main.h"

/**
 * _printf - Custom printf function.
 * @format: Format string containing directives.
 *
 * Return: The number of characters printed (excluding null byte).
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, a = 0;

	va_start(args, format);
	if (!format)
		return (-1);
	while (format[a])
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
			count++;
		}
		else if (format[a] == '%')
		{
			a++;
			if (format[a] == ' ' || format[a] == '\0')
				return (-1);
			if (other_specifiers(format[a], args, &count) == -1)
				return (-1);
		}
		a++;
	}
	va_end(args);
	return (count);
}



/**
 * other_specifiers - a function that checks a single format specifier.
 *
 * @specifiers: other format specifiers
 * @args: va_list
 * @count: a Pointer
 * Return: a value
 *
 */
int other_specifiers(char specifiers, va_list args, int *count)
{
	switch (specifiers)
	{
		case 'b':
			return (prints_binary(args, count));
		case 'u':
			return (prints_u(args, count));
		case 'o':
			return (prints_o(args, count));
		case 'x':
			return (prints_x(args, count));
		case 'X':
			return (prints_X(args, count));
		case 'S':
			return (prints_S(args, count));
		case 's':
			return (prints_str(args, count));
		case 'c':
			return (prints_char(args, count));
		case 'd':
		case 'i':
			return (prints_int(args, count));
		case '%':
			return (prints_perc(count));
		default:
			_putchar('%');
			_putchar(specifiers);
			(*count) += 2;
			return (0);
	}
}

