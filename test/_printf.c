#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: string parameter
 *
 * Return: Always zero
 */
int _printf(const char *format, ...)
{
	int count = 0, str_len = 0;
	va_list args_list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args_list, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				count++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args_list, int);

				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args_list, char*);

				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				count = count + str_len;
			}
		}
		format++;
	}
	va_end(args_list);
	return (count);
}
