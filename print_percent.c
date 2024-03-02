#include "main.h"

/**
 * print_percent - prints percent
 * @args: va_list (voided because unused)
 *
 * Return: 1 success, -1 failure
 */

int print_percent(va_list args)
{
	char p = '%';
	(void)args;

	/* write percent sign to standard output and return characters written */
	return (write(1, &p, 1));
}
