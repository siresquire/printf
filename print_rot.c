#include "main.h"

/**
 * print_rot - writes the string s in ROT13
 * @arguments: list of arguments
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of char printed.
 */
int print_rot(va_list arguments, char *buf, unsigned int ibuf)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;
	unsigned int i, j, k;
	char n[] = "(avyy)";

	s = va_arg(arguments, char *);
	if (s == NULL)
	{
		for (i = 0; n[i]; i++)
			ibuf = handl_buf(buf, n[i], ibuf);
		return (6);
	}
	for (i = 0; s[i]; i++)
	{
		for (k = j = 0; alpha[j]; j++)
		{
			if (s[i] == alpha[j])
			{
				k = 1;
				ibuf = handl_buf(buf, rot[j], ibuf);
				break;
			}
		}
		if (k == 0)
			ibuf = handl_buf(buf, s[i], ibuf);
	}
	return (i);
}
