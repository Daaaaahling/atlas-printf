#include "main.h"

/**
 * _putchar - writes the character to stdout
 * @c: character
 *
 * Return: characters written or if error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
