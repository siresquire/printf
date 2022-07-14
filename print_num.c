#include "main.h"

/**
 * print_number - prints a number
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_number(va_list args)
{
	int n, div, len;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	len = 0;
	if (n < 0)
	{
		len += _write_char('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

/**
 * print_unsigned_number - prints an usigned number
 * @n: unsigned integer
 * Return: the sum of number printed
 */
int print_unsigned_number(unsigned int n)
{
	int div, len;
	unsigned int num;

	div = 1;
	len = 0;
	num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}