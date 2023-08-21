#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: A parameter
 *
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args_list;

	va_start(args_list, format);

	if ((format == NULL) || (format[0] == '%' && format[1] == '\0') ||
			(format[0] == '%' && format[1] == ' ' && !format[2]))
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				write(1, "%", 1), count++;
			else
				formatSpecifier(&count, (char *)format, args_list);
			format++;
		}
		else
		{
			write(1, format, 1);
			count++, format++;
		}
	}
	va_end(args_list);
	return (count);
}

/**
 * formatSpecifier - a function that handles format specificiers
 * @count: a Pointer
 * @format: Pointer parameter
 * @args: Argument list
 */

void formatSpecifier(int *count, char *format, va_list args)
{
	char *f = format;
	int i = 0;

	funcStruct arr[6] = {
		{'c', _putchar}, {'s', _putstring}, {'d', _printint},
		{'i', _printint}, {'u', _printint}, {'b', _printbinary}};

	if (*f == 'd' || *f == 'i' || *f == 's' || *f == 'c' || *f == 'b'
			|| *f == 'u')
	{
		for (i = 0; i < 6; i++)
		{
			if (arr[i].c == *f)
				*count += arr[i].fpointer(args, format);
		}
	}
	else if (*f == '%')
	{
		format++;
	}
	else
	{
		write(1, "%", 1);
		write(1, format, 1);
		*count += 2;
	}
}
