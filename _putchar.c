#include "main.h"

/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 *
 * Return: 
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
