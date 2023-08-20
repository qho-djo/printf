#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int a, count = 0, s_count;

	va_list args;

	va_start(args, format);

	if (!format || !format[0])
		return (-1);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			a++;
		}
		else if (format[a + 1] == 's')
		{
			s_count = _puts(va_arg(args, char *));
			a++;
			count = count + (s_count - 1);
		}
		else if (format[a + 1] == '%')
		{
			_putchar('%');
		}
		count++;
	}
	va_end(args);
	return (count);
}
