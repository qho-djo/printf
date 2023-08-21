#include "main.h"

/**
  * print_char - Function to print a character
  * @c: Args
  *
  * Return: 1 for each char called
  */

int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
  * print_string - stdout the string passed to it
  * @str: Pointer to the string
  *
  * Return: Number of char
  */

int print_string(char *str)
{
	int count;

	count = strlen(str);
	write(1, str, strlen(str));
	return (count);
}
