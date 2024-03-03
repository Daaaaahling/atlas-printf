#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* included to use va_arg, etc */
#include <unistd.h> /* included to call write in functions */
#include <string.h> /* included to call  strlen */

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args);
int print_percent(va_list args);
int print_integer(va_list args);
int print_character(va_list args);

/**
 * struct PrintFormat - struct for format specifiers
 * @format_specifier: format specifier
 * @print_function: pointer to print functions
 */

typedef struct PrintFormat
{
	char *format_specifier;
	int (*print_function)(va_list);
} PrintFormat;

#endif
