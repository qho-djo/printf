#include "main.h"

/**
  * _printf - a function
  * @format: parameter string
  *
  * Return: count
  */


int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == 'c')
			{
				int c = va_arg(args, int);

				count += print_char(c);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				count += print_string(str);
			}
			else if (*format == '%')
			{
				count += print_char('%');
			}
		}
		else
		{
			count += print_char(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
