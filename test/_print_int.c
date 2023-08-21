#include "main.h"

/**
 * _print_int - Converts and prints an integer as a string.
 * @num: The integer to be printed.
 * Return: The number of characters printed.
 */

int _print_int(int num)
{
	unsigned int i, count = 0;
	char buffer[20];
	int index = sizeof(buffer) - 1;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}


	while (num > 0)
	{
		buffer[index] = '0' + (num % 10);
		num /= 10;
		index--;
	}

	for (i = index + 1; i < sizeof(buffer); i++)
	{
		_putchar(buffer[i]);
		count++;
	}

	return (count);
}

