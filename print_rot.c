#include "holberton.h"

/**
 * print_rot - writes the string s in ROT13
 * @l: list of arguments
 * @b: buffer pointer
 * @ib: index for buffer pointer
 * Return: number of char printed.
 */
int print_rot(va_list l, char *b, unsigned int ib)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;
	unsigned int i, j, k;
	char n[] = "(avyy)";

	s = va_arg(l, char *);
	if (s == NULL)
	{
		for (i = 0; n[i]; i++)
			ib = handl_buf(b, n[i], ib);
		return (6);
	}
	for (i = 0; s[i]; i++)
	{
		for (k = j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				k = 1;
				ib = handl_buf(b, rot[j], ib);
				break;
			}
		}
		if (k == 0)
			ib = handl_buf(b, s[i], ib);
	}
	return (i);
}
