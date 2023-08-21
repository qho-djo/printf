#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *c);
void formatSpecifier(int *count, char *format, va_list args);
int _print_int(int num);


/**
 * funcStruct - A struct that holds a character key
 * @c - a format specifer checker
 * @fpointer: Pointer to a function
 */

/**
  *typedef struct funcStruct
  *{
  *	const char c;
  *	int (*fpointer)(va_list, char *);
  *} funcStruct;
  */
#endif
