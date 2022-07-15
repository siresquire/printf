#include "main.h"

/**
 * print_reversed - reverse a string and print it
 * @arg: argument passed to the function
 * Return: The sum of character printed
 */
int print_reversed(va_list arg)
{
	int len;
	char *str;
	char *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_write_char(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * rot13 - use a rot13 to convert a string
 * @list: string to convert
 * Return: converted string
 */
int rot13(va_list list)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_write_char(u[x]);
				break;
			}
		}
		if (x == 53)
			_write_char(str[i]);
	}
	return (i);
}

/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @c: char to print
 * Return: number of chars printed
 */
static int hex_print(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_write_char('0' + diff + d[count]);
		else
			_write_char('0' + d[count]);
	}
	return (count);
}

/**
 * print_nasc - prints a string and nonprintable character ascii values
 * @S: string to print
 * Return: number of char printed
 */
int print_nasc(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_write_char('\\');
			_write_char('x');
			count += 2;
			count += hex_print(str[i]);
		}
		else
		{
			_write_char(str[i]);
			count++;
		}
	}
	return (count);
}
