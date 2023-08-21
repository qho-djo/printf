#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
#include <limits.h>

int prints_perc(int *count);
int _printf(const char *format, ...);
int _putchar(char c);
int print_number(long num, int *count);
int prints_str(va_list args, int *count);
int prints_char(va_list args, int *count);
int prints_int(va_list args, int *count);
int _puts(char *c);
void prints_binary(va_list args, int *count);

#endif
