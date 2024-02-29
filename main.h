#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* included to use va_arg, etc */
#include <unistd.h> /* included to call write in our functions */
int _printf(const char *format, ...);
int _putchar(char c);
int _print_string(va_list args);
int _print_percent(va_list args);

#endiif
