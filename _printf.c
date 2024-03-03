#include "main.h"
/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	PrintFormat specifiers[] = {
		{"c", print_character},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"%", print_percent},
		{NULL, NULL}
	};

	va_list args;
	int char_count = 0;
	int i, j = 0;

	/* Check if format string is empty */
	if (!format)
		return (-1); /* -1 if empty */

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			/* print the non format specifier  character*/
			char_count += _putchar(format[i]);
		}
		else
		{
			for (j = 0; j < 5; b++)
			{
				if (*specifiers[j].format_specifier == format[i + 1])
				{
					/* move past the % character */
					format++;
					/* Call the matching print function */
					char_count += specifiers[j].print_function(args);
					break;
				}
			}
			
			if (j == 5 && format[i + 1] == '\0')
				/* -1 if format specifier int given and no more input */
				return (-1);
			else if (j == 5 && format[i + 1] != '\0')
				char_count += _putchar(format[a]);
		}
	}
	va_end(args);
	return (char_count);
}
