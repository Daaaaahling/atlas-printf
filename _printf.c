#include "main.h"
/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	PrintFormat format_specifiers[] = {
		{"c", print_character},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{'%", print_percent},
		{NULL, NULL}
	};
