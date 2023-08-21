#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *c);
void formatSpecifier(int *count, char *format, va_list args);
int _print_int(int num);
int print_char(char c);
int print_string(char *str);
#endif
