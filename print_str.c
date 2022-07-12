#include "main.h"

/**
 * print_str - writes the string to stdout
 * @arguments: list of arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1
 */
int print_str(va_list arguments, char *buf, unsigned int ibuf)
{
	char *s;
	unsigned int i;
	char n[] = "(null)";

	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		for (i = 0; n[i]; i++)
			ibuf = handl_buf(buf, n[i], ibuf);
		return (6);
	}
	for (i = 0; str[i]; i++)
		ibuf = handl_buf(buf, s[i], ibuf);
	return (i);
}
