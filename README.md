# atlas-printf
At the core of printf is the format string. This string contains both text and format specifiers, which are placeholders for the values you want to print. Format specifiers start with a ‘%’ character, followed by a character that indicates the type of data to be printed (e.g., %d for integers, %s for strings).
One of the unique features of printf is its ability to accept a variable number of arguments. This is accomplished using variadic functions in C. The printf function, like many other standard C library functions, is declared with the stdarg.h header to enable this functionality.
Here’s a simplified explanation of how it works:
printf first encounters the format string and parses it to identify format specifiers (e.g., %d, %s).
For each format specifier, printf expects an argument of the corresponding type. For %d, it expects an int, for %s, it expects a char*, and so on.
The number of format specifiers determines the number of arguments printf needs to process.
You pass these arguments to printf after the format string.
To handle this variable number of arguments, printf uses the stdarg.hlibrary, which provides macros like va_list, va_start, and va_arg. These macros allow printf to access its arguments sequentially, even though it doesn’t know the number or types of arguments at compile-time.
Processing Format Specifiers:
Format specifiers in printf are placeholders that tell the function how to format and print data. They start with a ‘%’ character and are followed by a character that specifies the data type to be printed.
%d: Format as a signed decimal integer.
%u: Format as an unsigned decimal integer.
%i: Prints an integer in base 10.
%s: Format as a null-terminated string.
%c: Format as a character.
%x: Format as a hexadecimal number, lowercase.
%X: Format as a hexadecimal number, uppercase.
%p: The void * pointer argument has to be printed in hexadecimal format
%%: Prints a percent sign.
Authorized functions and macros :
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
