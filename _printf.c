#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int a, count = 0, s_count;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (a = 0; format && format[a] != '\0'; a++)
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
