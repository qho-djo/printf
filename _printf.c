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
			if (format[a] == 's')
				prints_str(args, &count);
			else if (format[a] == 'c')
				prints_char(args, &count);
			else if (format[a] == 'd' || format[a] == 'i')
				prints_int(args, &count);
			else if (format[a] == 'b')
				prints_binary(args, &count);
			else if (format[a] == '%')
				prints_perc(&count);
			else
			{
				_putchar(format[a - 1]);
				count++;
				_putchar(format[a]);
				count++;
			}
		}
		a++;
	}
	va_end(args);
	return (count);
}
