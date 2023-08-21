#include "main.h"

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * _printf - a function that produces output according to a format.
 * @format: a character string.
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
    int count = 0, i;
    va_list args;

    va_start(args, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            count++;
        }
        else if (format[i + 1] == '%')
        {
            _putchar('%');
            count++;
            i++;
        }
        else if (format[i + 1] == 'c')
        {
            char c = va_arg(args, int);
            _putchar(c);
            count++;
            i++;
        }
        else if (format[i + 1] == 's')
        {
            const char *str = va_arg(args, const char *);
            while (*str)
            {
                _putchar(*str);
                str++;
                count++;
            }
            i++;
        }
        else
        {
            _putchar('%');
            count++;
        }
    }

    va_end(args);
    return (count);
}
