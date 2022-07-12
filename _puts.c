#include "main.h"

/**
 * _puts - print a string with a new line
 * @string: intup str
 * Return: nb of character printed
 */

int _puts(char *string)
{
	int count = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		count++;
	}
	return (count);
}
