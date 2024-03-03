# Atlas-Printf

This project provides a custom implementation of the `printf` function in C, called `_printf`. It allows you to perform formatted output to the standard output stream (stdout) using various format specifiers.

## Header File

**main.h**

The main.h header file contains the declarations and definitions needed for the custom printf implementation. It provides the necessary prototypes, structures, and macros for the proper functioning of the project. _Printf relies on standard library headers (stdarg.h, unistd.h, and string.h) for handling variable arguments, writing to standard output, and working with strings.

## Primary Function:

**_printf.c**

This function allows you to print characters, strings, integers, and the percent sign ("%") by providing a format string containing special format specifiers. The function iterates through the format string, identifies the specifiers, and calls the corresponding print functions.

## Print Functions:

**print_character.c**

This function is designed to print a single character. It takes a va_list containing the character to print and returns the number of characters printed.

**print_integer.c**

This function is responsible for printing integers. It handles both positive and negative integers and converts them to strings before printing.

**print_string.c**

This function prints strings. It takes a va_list containing the string to print and returns the number of characters printed.

**print_percent**

This function prints a percent sign ("%"). It does not use the va_list parameter and returns the number of characters printed.

## Usage

To use the `_printf` function, compile the source files using a C compiler:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

Then, you can use the _printf function in your code:

```bash
int main(void) {
    _printf("Hello, %s!\n", "world");
    _printf("This is a character: %c\n", 'U');
    _printf("The answer is %d\n", 55);

    return (0);
}
```
**Format Specifiers**

The _printf function supports the following format specifiers:

**%c:** Print a single character.

**%s:** Print a string.

**%d, %i:** Print an integer.

**%%:** Print a percent sign ("%").

**Examples**

Here are some examples of using the _printf function:

```bash
_printf("Hello, %s!\n", "world");
/* Output: Hello, world! */

_printf("This is a character: %c\n", 'U');
/* Output: This is a character: U */

_printf("The answer is %d\n", 55);
/* Output: The answer is 55 */
```
