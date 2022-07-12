#include "main.h"

/**
 * print_rev - writes the string s in reverse
 * @arguments: list of arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of char printed.
 */
int print_rev(va_list arguments, char *buf, unsigned int ibuf)
{
	char *s;
	unsigned int i;
	int j = 0;
	char n[] = "(llun)";

	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		for (i = 0; n[i]; i++)
			ibuf = handl_buf(buf, n[i], ibuf);
		return (6);
	}
	for (i = 0; s[i]; i++)
		;
	j = i - 1;
	for (; j >= 0; j--)
		ibuf = handl_buf(buf, s[j], ibuf);
	return (i);
}
