/**
 * print_integer - Prints integer.
 * @args: va_list with the integer to print.
 *
 * Return: Number of characters printed.
 */
int print_integer(va_list args)
{
	int digit_count, swap_index;
	int buffer_index = 0;
	char buffer[20]; /* The buffer stores the integer as a string. */
	long int num;    /* Variable for integer value. */
	int is_negative = 0; /* to show if the number is negative. */
	int digit_count; /* variable to store the count of digits in integer */
	int swap_index; /* variable for index used for swapping digits in buffer */
	/* keep track of position in buffer while storing digits of integer */
	int buffer_index = 0;
	
	/* Get the integer argument from va_list. */
	if (sizeof(int) == sizeof(long int))
		num = va_arg(args, long int);
	
	else
		num = va_arg(args, int);
	
	/* Check if the number is negative. */
	if (num < 0)
	{
		is_negative = 1;
		/* convert number to positive */
		num = -num;
	}
	/* Get digits and store them in the buffer. */
	do
	{
		/* Convert digit to character. */
		buffer[buffer_index++]= num % 10 + '0';
		num /= 10;
	}
	
	while (num > 0);
	/* Count the number of digits in the integer. */
	digit_count = buffer_index;
	
	/* Add a - sign if the number is negative. */
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
	/* Write to standard output and return the character count. */
	return (write(1, buffer, digit_count));
}
