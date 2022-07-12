#include "holberton.h"

/**
 * print_str - writes the string to stdout
 * @l: list of arguments
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: On success 1
 */
int print_str(va_list l, char *b, unsigned int ib)
{
	char *s;
	unsigned int i;
	char n[] = "(null)";

	s = va_arg(l, char *);
	if (s == NULL)
	{
		for (i = 0; n[i]; i++)
			ib = handl_buf(b, n[i], ib);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ib = handl_buf(b, s[i], ib);
	return (i);
}
