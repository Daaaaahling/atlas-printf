#include "main.h"

/**
 * _print_string - prints string
 * @args: string to print from va_list
 *
 * Return: printed string. 1 on success -1 on failure
 */

int _print_string(va_list args)
{
	/* get argument type char* from va_list */
	char *s = va_args(args, char *);

	if (s == NULL)
		/* default value if string is NULL */
		s = "(null)";
	/* write string to standard output and return characters written */
	return (write(1,s, strlen(s)));
}