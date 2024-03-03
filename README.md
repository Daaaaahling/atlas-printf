# Atlas-Printf

This project provides a custom implementation of the `printf` function in C, called `_printf`. It allows you to perform formatted output to the standard output stream (stdout) using various format specifiers.

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
