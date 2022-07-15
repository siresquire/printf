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

/**
 * print_expo - calculates an exponant
 * @b: base of exponent
 * @e: exponent of number
 * Return: base pow exponent
 */
static unsigned long print_expo(unsigned int b, unsigned int e)
{
	unsigned int i;
	unsigned long res = b;

	for (i = 1; i < e; i++)
	{
		res *= b;
	}
	return (res);
}

/**
 * print_add - prints an address
 * @p: address to print
 * Return: number of character to print
 */
int print_add(va_list p)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long n, m;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_write_char(str[i]);
			count++;
		}
		return (count);
	}
	_write_char('0');
	_write_char('x');
	count = 2;
	m = print_expo(16, 15); /* 16 pow 15 */
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_write_char('0' + a[i]);
			else
				_write_char('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (count);
}
