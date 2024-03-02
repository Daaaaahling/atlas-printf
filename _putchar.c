#include "main.h"

/**
 * _putchar - writes the character to stdout
 * @c: character
 *
 * Return: characters written o r if error -1
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
