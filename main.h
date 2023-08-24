#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

int prints_perc(int *count);
int _printf(const char *format, ...);
int _putchar(char c);
int print_number(long num, int *count);
int prints_str(va_list args, int *count);
int prints_char(va_list args, int *count);
int prints_int(va_list args, int *count);
int _puts(char *c);
int prints_binary(va_list args, int *count);
int other_specifiers(char specifiers, va_list args, int *count);
int prints_S(va_list args, int *count);
int prints_uppercaseHex(unsigned int n, int base, int *count);
int prints_base(unsigned int n, int base, int *count);
int prints_X(va_list args, int *count);
int prints_x(va_list args, int *count);
int prints_o(va_list args, int *count);
int prints_u(va_list args, int *count);
void prints_single_x(int n, int *count);

#endif
