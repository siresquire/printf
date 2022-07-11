#include <main.h>
#include <stdio.h>

/**
 * print_chr - writes the character c to stdout
 * @l: input char
 * @b: buffer pointer
 * @i: index for buffer pointer
 * Return: Always 1
 */
int print_chr(va_list l, char *b, unsigned int i)
{
	char c;
	c = va_arg(l, int);
	handl_buf(b, c, i);
	return (1);
}
