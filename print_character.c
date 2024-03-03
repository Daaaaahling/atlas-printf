#include "main.h"

/**
 * print_character - Prints character
 * args: va_list with characters to print
 *
 * Return: number of characters printed
 */
int print_character(va_list args)
{
	char character = va_arg(args, int);

	return (write(1, &character, 1));
}
