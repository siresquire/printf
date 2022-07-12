#include "holberton.h"
#include <stdio.h>
/**
 * print_prg - print a percent symbol
 * @a: input char
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: On success 1
 */
int print_prg(va_list a __attribute__((unused)), char *b, unsigned int ib)
{
	handl_buf(b, '%', ib);
	return (1);
}
