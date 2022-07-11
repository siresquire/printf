#include "main.h"

/**
 * print_buf - prints buffer
 * @b: buffer pointer
 * @n: number of bytes to print
 * Return: number of bytes printed
 */
int print_buf(char *b, unsigned int n)
{
	return (write(1, b, n));
}
