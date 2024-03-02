/**
 * print_integer - Prints integer.
 * @args: va_list with the integer to print.
 *
 * Return: Number of characters printed.
 */
int print_integer(va_list args)
{
    char buffer[20]; /* The buffer stores the integer as a string. */
    long int num;    /* Variable for integer value. */
    int is_negative = 0; /* to show if the number is negative. */
    int digit_count, swap_index;
    int buffer_index = 0;

    /* Get the integer argument from va_list. */
    if (sizeof(int) == sizeof(long int))
    {
        num = va_arg(args, long int);
    }
    else
    {
        num = va_arg(args, int);
    }

    /* Check if the number is negative. */
    if (num < 0)
    {
        is_negative = 1;
        /* convert number to pisitive */
        num = -num;
    }

    /* Get digits and store them in the buffer. */
    do
    {
        buffer[buffer_index++] = num % 10 + '0'; /* Convert digit to character. */
        num /= 10;
    } while (num > 0);

    digit_count = buffer_index; /* Count the number of digits in the integer. */

    /* Add a '-' sign if the number is negative. */
    if (is_negative)
    {
        buffer[buffer_index++] = '-';
    }

    /* Reverse the digits in the buffer. */
    for (swap_index = 0; swap_index < buffer_index / 2; swap_index++)
    {
        char temp = buffer[swap_index];
        buffer[swap_index] = buffer[buffer_index - swap_index - 1];
        buffer[buffer_index - swap_index - 1] = temp;
    }

    /* Write the number to standard output and return the character count. */
    return write(1, buffer, digit_count);
}
