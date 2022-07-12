#include "main.h"

/**
 * print_rev - writes the string s in reverse
 * @l: list of arguments
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of char printed.
 */
int print_rev(va_list l, char *b, unsigned int ib)
{
	char *s;
	unsigned int i;
	int j = 0;
	char n[] = "(llun)";

	s = va_arg(l, char *);
	if (s == NULL)
	{
		for (i = 0; n[i]; i++)
			ib = handl_buf(b, n[i], ib);
		return (6);
	}
	for (i = 0; s[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
		ib = handl_buf(b, s[j], ib);
	return (i);
}
