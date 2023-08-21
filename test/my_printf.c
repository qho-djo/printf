#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - function
 * @format: parameter
 * Return: count
 */

int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);

				while (*s != '\0')
				{
					_putchar(*s);
					s++;
					count++;
				}
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				count++;
			}
		}
	}
	va_end(args);
	return (count);
}
